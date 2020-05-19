/*
** EPITECH PROJECT, 2018
** idk
** File description:
** idk
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/trace.h"
#include <sys/ptrace.h>
#include <string.h>
#include <sys/reg.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <errno.h>
#include <stdint.h>

static int key_to_sysc(unsigned long long int rax, sysc_t *syscall)
{
    for (size_t i = 0; sys_calls[i].name != NULL; i++) {
        if (sys_calls[i].id == (int)rax) {
            *syscall = sys_calls[i];
            return (0);
        }
    }
    return (-1);
}

char *read_str(pid_t child, unsigned long long addr, \
int allocated, int read)
{
    char *str = malloc(allocated);
    unsigned long long tmp = 0;
    while (str != NULL) {
        if (read + sizeof(tmp) > (long unsigned int)allocated) {
            allocated *= 2;
            char *temp_str = realloc(str, allocated);
            if (!temp_str)
                return NULL;
            str = temp_str;
        }
        tmp = ptrace(PTRACE_PEEKDATA, child, addr + read);
        if (errno != 0) {
            str[read] = 0;
            break;
        }
        memcpy(str + read, &tmp, sizeof(tmp));
        if (memchr(&tmp, 0, sizeof(tmp)) != NULL)
            break;
        read += sizeof(tmp);
    }
    return str;
}

int read_buf(unsigned long long reg, pid_t child, \
size_t nbytes, void *buffer)
{
    unsigned long tmp;
    size_t readb;
    size_t written;

    readb = 0;
    while (readb < nbytes)
    {
        errno = 0;
        tmp = ptrace(PTRACE_PEEKDATA, child, reg + readb);
        if (errno)
            return (-1);
        if ((nbytes - readb) / sizeof(tmp))
            written = sizeof(tmp);
        else
            written = nbytes % sizeof(tmp);
        memcpy((void *)((uintptr_t)buffer + readb), &tmp, written);
        readb += written;
    }
    return (0);
}

int sysc_trace(trc_t *trace, long int instr, struct user_regs_struct regs, \
pid_t child)
{
    sysc_t sys_call;
    (void)instr;
    if (key_to_sysc(regs.rax, &sys_call) == -1)
        return (0);
    dprintf(2, "%s(", sys_call.name);
    (trace->flags & OPT_DETAILLED ? \
    args_print_spe(child, &sys_call, regs): args_print_def(&sys_call, regs));
    (sys_call.ret != NONE ? (trace->flags & OPT_DETAILLED ? \
    ret_print_spe(child, &sys_call, regs, 0): \
    ret_print_def(child, &sys_call, regs)): dprintf(2, " = ?\n"));
    return (0);
}