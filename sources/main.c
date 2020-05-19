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

/*
* Attach an existing process to trace (-p option)
*/

static int route_tracee(trc_t *trace, int ac, char **av)
{
    char *args[ac + 1];
    memcpy(args, av, ac * sizeof(char *));
    args[ac] = NULL;
    ptrace(PTRACE_TRACEME);
    kill(getpid(), SIGSTOP);
    return (execvp(trace->command, trace->eargs));
}

static int route_tracer(trc_t *trace, pid_t child)
{
    int status;
    struct user_regs_struct regs;
    long int instr;
    waitpid(child, &status, 0);
    while (WIFSTOPPED(status))  {
        errno = 0;
        if (ptrace(PTRACE_GETREGS, child, 0, &regs) && errno)
            return (84);
        if ((instr = ptrace(PTRACE_PEEKTEXT, child, regs.rip, 0)) == -1 \
        && errno)
            return (84);
        if (STRACE_IS_SYSCALL(instr))
            sysc_trace(trace, instr, regs, child);
        if (ptrace(PTRACE_SINGLESTEP, child, 0, 0) == -1)
            return (84);
        if (waitpid(child, &status, 0) == -1)
            return (84);
    }
    dprintf(2, "+++ exited with %d ++++\n", status);
    return (0);
}

static int strace_execve(trc_t *trace, int ac, char **av)
{
    pid_t child = fork();
    if (child == 0)
        return (route_tracee(trace, ac - 1, av + 1));
    else
        return (route_tracer(trace, child));
}

static int strace_attach(trc_t *trace)
{
    if (ptrace(PTRACE_ATTACH, trace->pid, NULL, NULL) == -1)
        return (84);
    return (route_tracer(trace, trace->pid));
}

/* Inspect parsing
* dprintf(2, "command: %s\npid: %d\nflags: %s | %s\n", \
(trace->command == NULL ? "NULL": trace->command), \
* trace->pid, (trace->flags & OPT_DETAILLED ? "OPT_DETAILED": ""), \
(trace->flags & OPT_PID ? ("OPT_PID": ""));
*/

int main(const int ac, const char **av)
{
    trc_t *trace = parse_args(ac, av);
    if (trace == NULL)
        return (84);
    if (trace->flags & OPT_PID)
        return (strace_attach(trace));
    else
        return (strace_execve(trace, (int)ac, (char **)av));
}
