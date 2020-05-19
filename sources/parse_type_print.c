/*
** EPITECH PROJECT, 2020
** PSU_strace_2019
** File description:
** TODO: add description
*/

#include "../include/trace.h"
#include <stdio.h>

int print_string(pid_t child, unsigned long long int reg)
{
    char *str = read_str(child, reg, 2048, 0);
    if (str)
        dprintf(2, "\"%s\"", str);
    return (0);
}

int parser_print(pid_t child, sysc_t *sys_call, \
unsigned long long int reg, int i)
{
    switch (sys_call->av[i].reg) {
        case INT: dprintf(2, "%d", (int)reg);
            break;
        case PTR: dprintf(2, "%#llx", reg);
            break;
        case STR: print_string(child, reg);
            break;
        case LONG: dprintf(2, "%ld", (long)reg);
            break;
        case ULONG: dprintf(2, "%lu", (unsigned long)reg);
            break;
        default: parser_print_2(child, sys_call, reg, i);
            break;
    }
    return (0);
}

int parser_print_2(pid_t child, sysc_t *sys_call, \
unsigned long long int reg, int i)
{
    switch (sys_call->av[i].reg) {
        case SIZET : dprintf(2, "%zu", (size_t)reg);
            break;
        case SSIZET: dprintf(2, "%zu", (ssize_t)reg);
            break;
        case CUSTOM: sys_call->av[i].ptr(child, reg);
            break;
        case DEFAULT: dprintf(2, "0x%llx", reg);
            break;
        default: break;
    }
    return (0);
}