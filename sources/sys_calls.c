/*
** EPITECH PROJECT, 2018
** idk
** File description:
** idk
*/

#include "../include/trace.h"
#include <stdio.h>

sysc_t sys_calls[] =  {
    {
        .id = 0,
        .name = "read",
        .ret = SSIZET,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL,
            },
        }
    },
    {
        .id = 1,
        .name = "write",
        .ret = SSIZET,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL,
            },
        }
    },
    {
        .id = 2,
        .name = "open",
        .ret = INT,
        .ac = 3,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = CUSTOM,
                .ptr = print_flags_open
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 3,
        .name = "close",
        .ret = INT,
        .ac = 1,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 4,
        .name = "stat",
        .ret = INT,
        .ac = 2,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = CUSTOM,
                .ptr = print_stat_struct
            },
        }
    },
    {
        .id = 5,
        .name = "fstat",
        .ret = INT,
        .ac = 2,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = CUSTOM,
                .ptr = print_stat_struct
            },
        }
    },
    {
        .id = 6,
        .name = "lstat",
        .ret = INT,
        .ac = 2,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = CUSTOM,
                .ptr = print_stat_struct
            },
        }
    },
    {
        .id = 7,
        .name = "poll",
        .ret = INT,
        .ac = 3,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 8,
        .name = "lseek",
        .ret = INT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = ULONG,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 9,
        .name = "mmap",
        .ret = PTR,
        .ac = 6,
        .av = {
            {
                .reg = PTR,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = CUSTOM,
                .ptr = print_mmap_flags
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = ULONG,
                .ptr = NULL
            },
        }
    },
    {
        .id = 10,
        .name = "mprotect",
        .ret = INT,
        .ac = 3,
        .av = {
            {
                .reg = PTR,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 11,
        .name = "munmap",
        .ret = INT,
        .ac = 2,
        .av = {
            {
                .reg = PTR,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
        }
    },
    {
        .id = 12,
        .name = "brk",
        .ret = PTR,
        .ac = 1,
        .av = {
            {
                .reg = ULONG,
                .ptr = NULL
            },
        }
    },
    {
        .id = 13,
        .name = "rt_sigaction",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
        }
    },
    {
        .id = 14,
        .name = "rt_sigprocmask",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
        }
    },
    {
        .id = 15,
        .name = "rt_sigreturn",
        .ret = DEFAULT,
        .ac = 0,
        .av = {
            { 0 }
        }
    },
    {
        .id = 16,
        .name = "ioctl",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 17,
        .name = "pread64",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 18,
        .name = "pwrite64",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 19,
        .name = "readv",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 20,
        .name = "writev",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 21,
        .name = "access",
        .ret = INT,
        .ac = 2,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 22,
        .name = "pipe",
        .ret = INT,
        .ac = 1,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 23,
        .name = "select",
        .ret = INT,
        .ac = 5,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 24,
        .name = "sched_yield",
        .ret = DEFAULT,
        .ac = 0,
        .av = {
            { 0 }
        }
    },
    {
        .id = 25,
        .name = "mremap",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = ULONG,
                .ptr = NULL
            },
        }
    },
    {
        .id = 26,
        .name = "msync",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = PTR,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 27,
        .name = "mincore",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = PTR,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 28,
        .name = "madvise",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = PTR,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 29,
        .name = "shmget",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 30,
        .name = "shmat",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 31,
        .name = "shmctl",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 32,
        .name = "dup",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 33,
        .name = "dup2",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 34,
        .name = "pause",
        .ret = DEFAULT,
        .ac = 0,
        .av = {
            { 0 }
        }
    },
    {
        .id = 35,
        .name = "nanosleep",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 36,
        .name = "getitimer",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 37,
        .name = "alarm",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 38,
        .name = "setitimer",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 39,
        .name = "getpid",
        .ret = DEFAULT,
        .ac = 0,
        .av = {
            { 0 }
        }
    },
    {
        .id = 40,
        .name = "sendfile",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = ULONG,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
        }
    },
    {
        .id = 41,
        .name = "socket",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 42,
        .name = "connect",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 43,
        .name = "accept",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 44,
        .name = "sendto",
        .ret = DEFAULT,
        .ac = 6,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = PTR,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 45,
        .name = "recvfrom",
        .ret = DEFAULT,
        .ac = 6,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = PTR,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 46,
        .name = "sendmsg",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 47,
        .name = "recvmsg",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 48,
        .name = "shutdown",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 49,
        .name = "bind",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 50,
        .name = "listen",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 51,
        .name = "getsockname",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 52,
        .name = "getpeername",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 53,
        .name = "socketpair",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 54,
        .name = "setsockopt",
        .ret = DEFAULT,
        .ac = 5,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 55,
        .name = "getsockopt",
        .ret = DEFAULT,
        .ac = 5,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 56,
        .name = "clone",
        .ret = DEFAULT,
        .ac = 5,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 57,
        .name = "fork",
        .ret = DEFAULT,
        .ac = 0,
        .av = {
            { 0 }
        }
    },
    {
        .id = 58,
        .name = "vfork",
        .ret = DEFAULT,
        .ac = 0,
        .av = {
            { 0 }
        }
    },
    {
        .id = 59,
        .name = "execve",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 60,
        .name = "exit",
        .ret = NONE,
        .ac = 1,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 61,
        .name = "wait4",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 62,
        .name = "kill",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 63,
        .name = "uname",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
        }
    },
    {
        .id = 64,
        .name = "semget",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 65,
        .name = "semop",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 66,
        .name = "semctl",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 67,
        .name = "shmdt",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 68,
        .name = "msgget",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 69,
        .name = "msgsnd",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 70,
        .name = "msgrcv",
        .ret = DEFAULT,
        .ac = 5,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 71,
        .name = "msgctl",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 72,
        .name = "fcntl",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 73,
        .name = "flock",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 74,
        .name = "fsync",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 75,
        .name = "fdatasync",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 76,
        .name = "truncate",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
        }
    },
    {
        .id = 77,
        .name = "ftruncate",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
        }
    },
    {
        .id = 78,
        .name = "getdents",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
        }
    },
    {
        .id = 79,
        .name = "getcwd",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
        }
    },
    {
        .id = 80,
        .name = "chdir",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
        }
    },
    {
        .id = 81,
        .name = "fchdir",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 82,
        .name = "rename",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
        }
    },
    {
        .id = 83,
        .name = "mkdir",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 84,
        .name = "rmdir",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
        }
    },
    {
        .id = 85,
        .name = "creat",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 86,
        .name = "link",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
        }
    },
    {
        .id = 87,
        .name = "unlink",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
        }
    },
    {
        .id = 88,
        .name = "symlink",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
        }
    },
    {
        .id = 89,
        .name = "readlink",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 90,
        .name = "chmod",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 91,
        .name = "fchmod",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 92,
        .name = "chown",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 93,
        .name = "fchown",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 94,
        .name = "lchown",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 95,
        .name = "umask",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 96,
        .name = "gettimeofday",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 97,
        .name = "getrlimit",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 98,
        .name = "getrusage",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 99,
        .name = "sysinfo",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 100,
        .name = "times",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 101,
        .name = "ptrace",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = PTR,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 102,
        .name = "getuid",
        .ret = DEFAULT,
        .ac = 0,
        .av = {
            { 0 }
        }
    },
    {
        .id = 103,
        .name = "syslog",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
        }
    },
    {
        .id = 104,
        .name = "getgid",
        .ret = DEFAULT,
        .ac = 0,
        .av = {
            { 0 }
        }
    },
    {
        .id = 105,
        .name = "setuid",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 106,
        .name = "setgid",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 107,
        .name = "geteuid",
        .ret = DEFAULT,
        .ac = 0,
        .av = {
            { 0 }
        }
    },
    {
        .id = 108,
        .name = "getegid",
        .ret = DEFAULT,
        .ac = 0,
        .av = {
            { 0 }
        }
    },
    {
        .id = 109,
        .name = "setpgid",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 110,
        .name = "getppid",
        .ret = DEFAULT,
        .ac = 0,
        .av = {
            { 0 }
        }
    },
    {
        .id = 111,
        .name = "getpgrp",
        .ret = DEFAULT,
        .ac = 0,
        .av = {
            { 0 }
        }
    },
    {
        .id = 112,
        .name = "setsid",
        .ret = DEFAULT,
        .ac = 0,
        .av = {
            { 0 }
        }
    },
    {
        .id = 113,
        .name = "setreuid",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 114,
        .name = "setregid",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 115,
        .name = "getgroups",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 116,
        .name = "setgroups",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 117,
        .name = "setresuid",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 118,
        .name = "getresuid",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 119,
        .name = "setresgid",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 120,
        .name = "getresgid",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 121,
        .name = "getpgid",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 122,
        .name = "setfsuid",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 123,
        .name = "setfsgid",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 124,
        .name = "getsid",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 125,
        .name = "capget",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 126,
        .name = "capset",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 127,
        .name = "rt_sigpending",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
        }
    },
    {
        .id = 128,
        .name = "rt_sigtimedwait",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
        }
    },
    {
        .id = 129,
        .name = "rt_sigqueueinfo",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 130,
        .name = "rt_sigsuspend",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
        }
    },
    {
        .id = 131,
        .name = "sigaltstack",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 132,
        .name = "utime",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 133,
        .name = "mknod",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 134,
        .name = "uselib",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 135,
        .name = "personality",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 136,
        .name = "ustat",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 137,
        .name = "statfs",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 138,
        .name = "fstatfs",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 139,
        .name = "sysfs",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 140,
        .name = "getpriority",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 141,
        .name = "setpriority",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 142,
        .name = "sched_setparam",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 143,
        .name = "sched_getparam",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 144,
        .name = "sched_setscheduler",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 145,
        .name = "sched_getscheduler",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 146,
        .name = "sched_get_priority_max",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 147,
        .name = "sched_get_priority_min",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 148,
        .name = "sched_rr_get_interval",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 149,
        .name = "mlock",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = PTR,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
        }
    },
    {
        .id = 150,
        .name = "munlock",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = PTR,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
        }
    },
    {
        .id = 151,
        .name = "mlockall",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 152,
        .name = "munlockall",
        .ret = DEFAULT,
        .ac = 0,
        .av = {
            { 0 }
        }
    },
    {
        .id = 153,
        .name = "vhangup",
        .ret = DEFAULT,
        .ac = 0,
        .av = {
            { 0 }
        }
    },
    {
        .id = 154,
        .name = "modify_ldt",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 155,
        .name = "pivot_root",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 156,
        .name = "_sysctl",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 157,
        .name = "prctl",
        .ret = DEFAULT,
        .ac = 5,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 158,
        .name = "arch_prctl",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = PTR,
                .ptr = NULL
            },
        }
    },
    {
        .id = 159,
        .name = "adjtimex",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 160,
        .name = "setrlimit",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 161,
        .name = "chroot",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
        }
    },
    {
        .id = 162,
        .name = "sync",
        .ret = DEFAULT,
        .ac = 0,
        .av = {
            { 0 }
        }
    },
    {
        .id = 163,
        .name = "acct",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
        }
    },
    {
        .id = 164,
        .name = "settimeofday",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 165,
        .name = "mount",
        .ret = DEFAULT,
        .ac = 5,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 166,
        .name = "umount2",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 167,
        .name = "swapon",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 168,
        .name = "swapoff",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 169,
        .name = "reboot",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 170,
        .name = "sethostname",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
        }
    },
    {
        .id = 171,
        .name = "setdomainname",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
        }
    },
    {
        .id = 172,
        .name = "iopl",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 173,
        .name = "ioperm",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 174,
        .name = "create_module",
        .ret = DEFAULT,
        .ac = 0,
        .av = {
            { 0 }
        }
    },
    {
        .id = 175,
        .name = "init_module",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 176,
        .name = "delete_module",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 177,
        .name = "get_kernel_syms",
        .ret = DEFAULT,
        .ac = 0,
        .av = {
            { 0 }
        }
    },
    {
        .id = 178,
        .name = "query_module",
        .ret = DEFAULT,
        .ac = 0,
        .av = {
            { 0 }
        }
    },
    {
        .id = 179,
        .name = "quotactl",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = PTR,
                .ptr = NULL
            },
        }
    },
    {
        .id = 180,
        .name = "nfsservctl",
        .ret = DEFAULT,
        .ac = 0,
        .av = {
            { 0 }
        }
    },
    {
        .id = 181,
        .name = "getpmsg",
        .ret = DEFAULT,
        .ac = 0,
        .av = {
            { 0 }
        }
    },
    {
        .id = 182,
        .name = "putpmsg",
        .ret = DEFAULT,
        .ac = 0,
        .av = {
            { 0 }
        }
    },
    {
        .id = 183,
        .name = "afs_syscall",
        .ret = DEFAULT,
        .ac = 0,
        .av = {
            { 0 }
        }
    },
    {
        .id = 184,
        .name = "tuxcall",
        .ret = DEFAULT,
        .ac = 0,
        .av = {
            { 0 }
        }
    },
    {
        .id = 185,
        .name = "security",
        .ret = DEFAULT,
        .ac = 0,
        .av = {
            { 0 }
        }
    },
    {
        .id = 186,
        .name = "gettid",
        .ret = DEFAULT,
        .ac = 0,
        .av = {
            { 0 }
        }
    },
    {
        .id = 187,
        .name = "readahead",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = ULONG,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
        }
    },
    {
        .id = 188,
        .name = "setxattr",
        .ret = DEFAULT,
        .ac = 5,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 189,
        .name = "lsetxattr",
        .ret = DEFAULT,
        .ac = 5,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 190,
        .name = "fsetxattr",
        .ret = DEFAULT,
        .ac = 5,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 191,
        .name = "getxattr",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
        }
    },
    {
        .id = 192,
        .name = "lgetxattr",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
        }
    },
    {
        .id = 193,
        .name = "fgetxattr",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
        }
    },
    {
        .id = 194,
        .name = "listxattr",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
        }
    },
    {
        .id = 195,
        .name = "llistxattr",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
        }
    },
    {
        .id = 196,
        .name = "flistxattr",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
        }
    },
    {
        .id = 197,
        .name = "removexattr",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
        }
    },
    {
        .id = 198,
        .name = "lremovexattr",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
        }
    },
    {
        .id = 199,
        .name = "fremovexattr",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
        }
    },
    {
        .id = 200,
        .name = "tkill",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 201,
        .name = "time",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 202,
        .name = "futex",
        .ret = DEFAULT,
        .ac = 6,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 203,
        .name = "sched_setaffinity",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 204,
        .name = "sched_getaffinity",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 205,
        .name = "set_thread_area",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 206,
        .name = "io_setup",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 207,
        .name = "io_destroy",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 208,
        .name = "io_getevents",
        .ret = DEFAULT,
        .ac = 5,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 209,
        .name = "io_submit",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 210,
        .name = "io_cancel",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 211,
        .name = "get_thread_area",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 212,
        .name = "lookup_dcookie",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
        }
    },
    {
        .id = 213,
        .name = "epoll_create",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = SIZET,
                .ptr = NULL
            },
        }
    },
    {
        .id = 214,
        .name = "epoll_ctl_old",
        .ret = DEFAULT,
        .ac = 0,
        .av = {
            { 0 }
        }
    },
    {
        .id = 215,
        .name = "epoll_wait_old",
        .ret = DEFAULT,
        .ac = 0,
        .av = {
            { 0 }
        }
    },
    {
        .id = 216,
        .name = "remap_file_pages",
        .ret = DEFAULT,
        .ac = 5,
        .av = {
            {
                .reg = PTR,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 217,
        .name = "getdents64",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
        }
    },
    {
        .id = 218,
        .name = "set_tid_address",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 219,
        .name = "restart_syscall",
        .ret = DEFAULT,
        .ac = 0,
        .av = {
            { 0 }
        }
    },
    {
        .id = 220,
        .name = "semtimedop",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 221,
        .name = "fadvise64",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = ULONG,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 222,
        .name = "timer_create",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 223,
        .name = "timer_settime",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 224,
        .name = "timer_gettime",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 225,
        .name = "timer_getoverrun",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 226,
        .name = "timer_delete",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 227,
        .name = "clock_settime",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 228,
        .name = "clock_gettime",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 229,
        .name = "clock_getres",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 230,
        .name = "clock_nanosleep",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 231,
        .name = "exit_group",
        .ret = NONE,
        .ac = 1,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 232,
        .name = "epoll_wait",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 233,
        .name = "epoll_ctl",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 234,
        .name = "tgkill",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 235,
        .name = "utimes",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 236,
        .name = "vserver",
        .ret = DEFAULT,
        .ac = 0,
        .av = {
            { 0 }
        }
    },
    {
        .id = 237,
        .name = "mbind",
        .ret = DEFAULT,
        .ac = 6,
        .av = {
            {
                .reg = PTR,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 238,
        .name = "set_mempolicy",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 239,
        .name = "get_mempolicy",
        .ret = DEFAULT,
        .ac = 5,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = PTR,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 240,
        .name = "mq_open",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 241,
        .name = "mq_unlink",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 242,
        .name = "mq_timedsend",
        .ret = DEFAULT,
        .ac = 5,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 243,
        .name = "mq_timedreceive",
        .ret = DEFAULT,
        .ac = 5,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 244,
        .name = "mq_notify",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 245,
        .name = "mq_getsetattr",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 246,
        .name = "kexec_load",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 247,
        .name = "waitid",
        .ret = DEFAULT,
        .ac = 5,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 248,
        .name = "add_key",
        .ret = DEFAULT,
        .ac = 5,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 249,
        .name = "request_key",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 250,
        .name = "keyctl",
        .ret = DEFAULT,
        .ac = 5,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 251,
        .name = "ioprio_set",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 252,
        .name = "ioprio_get",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 253,
        .name = "inotify_init",
        .ret = DEFAULT,
        .ac = 0,
        .av = {
            { 0 }
        }
    },
    {
        .id = 254,
        .name = "inotify_add_watch",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 255,
        .name = "inotify_rm_watch",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 256,
        .name = "migrate_pages",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 257,
        .name = "openat",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 258,
        .name = "mkdirat",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 259,
        .name = "mknodat",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 260,
        .name = "fchownat",

        .ret = DEFAULT,
        .ac = 5,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 261,
        .name = "futimesat",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 262,
        .name = "newfstatat",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 263,
        .name = "unlinkat",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 264,
        .name = "renameat",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
        }
    },
    {
        .id = 265,
        .name = "linkat",
        .ret = DEFAULT,
        .ac = 5,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 266,
        .name = "symlinkat",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
        }
    },
    {
        .id = 267,
        .name = "readlinkat",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 268,
        .name = "fchmodat",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 269,
        .name = "faccessat",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 270,
        .name = "pselect6",
        .ret = DEFAULT,
        .ac = 6,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 271,
        .name = "ppoll",
        .ret = DEFAULT,
        .ac = 5,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
        }
    },
    {
        .id = 272,
        .name = "unshare",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 273,
        .name = "set_robust_list",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
        }
    },
    {
        .id = 274,
        .name = "get_robust_list",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 275,
        .name = "splice",
        .ret = DEFAULT,
        .ac = 6,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 276,
        .name = "tee",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 277,
        .name = "sync_file_range",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = ULONG,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 278,
        .name = "vmsplice",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 279,
        .name = "move_pages",
        .ret = DEFAULT,
        .ac = 6,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 280,
        .name = "utimensat",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 281,
        .name = "epoll_pwait",
        .ret = DEFAULT,
        .ac = 6,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
        }
    },
    {
        .id = 282,
        .name = "signalfd",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 283,
        .name = "timerfd_create",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 284,
        .name = "eventfd",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = SIZET,
                .ptr = NULL
            },
        }
    },
    {
        .id = 285,
        .name = "fallocate",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = ULONG,
                .ptr = NULL
            },
            {
                .reg = SIZET,
                .ptr = NULL
            },
        }
    },
    {
        .id = 286,
        .name = "timerfd_settime",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 287,
        .name = "timerfd_gettime",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 288,
        .name = "accept4",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 289,
        .name = "signalfd4",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 290,
        .name = "eventfd2",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = SIZET,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 291,
        .name = "epoll_create1",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 292,
        .name = "dup3",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 293,
        .name = "pipe2",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 294,
        .name = "inotify_init1",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 295,
        .name = "preadv",
        .ret = DEFAULT,
        .ac = 5,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 296,
        .name = "pwritev",
        .ret = DEFAULT,
        .ac = 5,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 297,
        .name = "rt_tgsigqueueinfo",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 298,
        .name = "perf_event_open",
        .ret = DEFAULT,
        .ac = 5,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 299,
        .name = "recvmmsg",
        .ret = DEFAULT,
        .ac = 5,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 300,
        .name = "fanotify_init",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 301,
        .name = "fanotify_mark",
        .ret = DEFAULT,
        .ac = 5,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
        }
    },
    {
        .id = 302,
        .name = "prlimit64",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 303,
        .name = "name_to_handle_at",
        .ret = DEFAULT,
        .ac = 5,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = STR,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 304,
        .name = "open_by_handle_at",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 305,
        .name = "clock_adjtime",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 306,
        .name = "syncfs",
        .ret = DEFAULT,
        .ac = 1,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 307,
        .name = "sendmmsg",
        .ret = DEFAULT,
        .ac = 4,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 308,
        .name = "setns",
        .ret = DEFAULT,
        .ac = 2,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 309,
        .name = "getcpu",
        .ret = DEFAULT,
        .ac = 3,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 310,
        .name = "process_vm_readv",
        .ret = DEFAULT,
        .ac = 6,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 311,
        .name = "process_vm_writev",
        .ret = DEFAULT,
        .ac = 6,
        .av = {
            {
                .reg = INT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = INT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 312,
        .name = "kcmp",
        .ret = DEFAULT,
        .ac = 5,
        .av = {
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
            {
                .reg = DEFAULT,
                .ptr = NULL
            },
        }
    },
    {
        .id = 1000,
        .name = NULL,
        .ret = 0,
        .ac = 0,
        .av = {{ 0 }},
    },
};