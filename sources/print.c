/*
** EPITECH PROJECT, 2018
** idk
** File description:
** idk
*/

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/ptrace.h>
#include <sys/reg.h>
#include <errno.h>
#include <stdio.h>
#include "../include/trace.h"
#include <sys/wait.h>

void args_print_spe(pid_t child, sysc_t *sys_call, \
struct user_regs_struct regs)
{
    for (int i = 0; i < sys_call->ac; i++) {
        switch (i) {
            case (0) : parser_print(child, sys_call, regs.rdi, i);
                break;
            case (1) : parser_print(child, sys_call, regs.rsi, i);
                break;
            case (2) : parser_print(child, sys_call, regs.rdx, i);
                break;
            case (3) : parser_print(child, sys_call, regs.r10, i);
                break;
            case (4) : parser_print(child, sys_call, regs.r8, i);
                break;
            case (5) : parser_print(child, sys_call, regs.r9, i);
                break;
            default: break;
        }
        (i + 1 ==  sys_call->ac ? dprintf(2, ")") : dprintf(2, ", "));
    }
}

void args_print_def(sysc_t *sys_call, struct user_regs_struct regs)
{
    for (int i = 0; i < sys_call->ac; i++) {
        switch (i) {
            case (0) : dprintf(2, "0x%llx", regs.rdi);
                break;
            case (1) : dprintf(2, "0x%llx", regs.rsi);
                break;
            case (2) : dprintf(2, "0x%llx", regs.rdx);
                break;
            case (3) : dprintf(2, "0x%llx", regs.r10);
                break;
            case (4) : dprintf(2, "0x%llx", regs.r8);
                break;
            case (5) : dprintf(2, "0x%llx", regs.r9);
                break;
            default: break;
        }
        (i + 1 ==  sys_call->ac ? dprintf(2, ")") : dprintf(2, ", "));
    }
}

int ret_print_def(pid_t child, sysc_t *sys_call, struct user_regs_struct regs)
{
    int status;

    if (ptrace(PTRACE_SINGLESTEP, child, 0, 0) == -1)
        return (-1);
    waitpid(child, &status, 0);
    errno = 0;
    if (ptrace(PTRACE_GETREGS, child, 0, &regs) && errno)
        return (-1);
    if (sys_call->ret != NONE)
        dprintf(2, " = 0x%llx\n", regs.rax);
    return (0);
}

int ret_print_spe(pid_t child, sysc_t *sys_call, \
struct user_regs_struct regs, int status)
{
    if (ptrace(PTRACE_SINGLESTEP, child, 0, 0) == -1)
        return (-1);
    waitpid(child, &status, 0);
    errno = 0;
    if (ptrace(PTRACE_GETREGS, child, 0, &regs) && errno)
        return (-1);
    switch (sys_call->ret) {
        case INT: dprintf(2, " = %d\n", (int)regs.rax);
            break;
        case PTR: dprintf(2, " = %#llx\n", regs.rax);
            break;
        case SIZET : dprintf(2, "= %zu\n", (size_t)regs.rax);
            break;
        case SSIZET: dprintf(2, " = %zu\n", (ssize_t)regs.rax);
            break;
        case DEFAULT: dprintf(2, "= 0x%llx\n", regs.rax);
            break;
        default:
            break;
    }
    return (0);
}

int print_flags(long long int val, size_t size, \
const struct flag_s *flags)
{
    int	j = 0;

    for (size_t i = 0; i < size; i++) {
        if ((val & flags[i].flag) == flags[i].flag) {
                if (j != 0)
            dprintf(2, "|");
            dprintf(2, "%s", flags[i].name);
            j++;
        }
    }
    return (0);
}
