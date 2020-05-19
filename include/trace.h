/*
** EPITECH PROJECT, 2018
** idk
** File description:
** idk
*/

#ifndef TRACE_H_
#define TRACE_H_

#include <sys/user.h>
#include <sys/types.h>

#define BASE 10
#define OPT_DETAILLED 0x10
#define OPT_PID 0x20
#define STRACE_IS_SYSCALL(instr) ((instr & 0xffff) == 0x50f)
#define ARRAYSIZE(arr) (sizeof(arr) / sizeof(arr[0]))

typedef struct trace_s {
    int flags;
    pid_t pid;
    char *command;
    char **eargs;
    short int alignment;
    char **argv;
} trc_t;

typedef int (*funcptr_t)(pid_t, unsigned long long);

typedef enum {
    INT,
    PTR,
    STR,
    LONG,
    ULONG,
    SIZET,
    SSIZET,
    CUSTOM,
    NONE,
    DEFAULT
} retype_t;

typedef struct sycallargs_s {
    retype_t reg;
    funcptr_t ptr;
} sysarg_t;

typedef struct syscall_s {
    int id;
    char *name;
    retype_t ret;
    int ac;
    sysarg_t av[6];
} sysc_t;

typedef struct flag_s
{
    char *name;
    int flag;
} flag_t;

extern sysc_t sys_calls[];
void args_print_spe(pid_t child, sysc_t *sys_call, \
struct user_regs_struct regs);
void args_print_def(sysc_t *sys_call, struct user_regs_struct regs);
int ret_print_def(pid_t child, sysc_t *sys_call, struct user_regs_struct regs);
int ret_print_spe(pid_t child, sysc_t *sys_call, \
struct user_regs_struct regs, int status);
int sysc_trace(trc_t *trace, long int instr, struct user_regs_struct regs, \
pid_t child);
trc_t *parse_args(const int ac, const char **av);
int print_stat_struct(pid_t pid, unsigned long long reg);
int print_mmap_flags(pid_t pid, unsigned long long reg);
int print_flags_open(pid_t pid, unsigned long long reg);
int parser_print(pid_t child, sysc_t *sys_call, \
unsigned long long int reg, int i);
int parser_print_2(pid_t child, sysc_t *sys_call, \
unsigned long long int reg, int i);
char *read_str(pid_t child, unsigned long long addr, \
int allocated, int read);
int read_buf(unsigned long long reg, pid_t child, \
size_t nbytes, void *buffer);
int print_flags(long long int val, size_t size, \
const struct flag_s *flags);
#endif