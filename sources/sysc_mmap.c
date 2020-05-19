/*
** EPITECH PROJECT, 2018
** idk
** File description:
** idk
*/

#include "../include/trace.h"
#include <sys/mman.h>
#include <stdio.h>

static const struct flag_s flagsprot[] = {
    {.flag = PROT_EXEC, .name = "PROT_EXEC"},
    {.flag = PROT_READ, .name = "PROT_READ"},
    {.flag = PROT_WRITE, .name = "PROT_WRITE"},
    {.flag = PROT_NONE, .name = "PROT_NONE"},
};

static const struct flag_s flagsmap[] = {
    {.flag = MAP_SHARED, .name = "MAP_SHARED"},
    {.flag = MAP_PRIVATE, .name = "MAP_PRIVATE"},
    {.flag = MAP_FIXED, .name = "MAP_FIXED"},
    {.flag = MAP_ANONYMOUS, .name = "MAP_ANONYMOUS"},
    {.flag = MAP_DENYWRITE, .name = "MAP_DENYWRITE"}
};

int print_mmap_flags(pid_t child, unsigned long long reg)
{
    (void)(child);
    print_flags((long long int)reg, ARRAYSIZE(flagsprot), flagsprot);
    dprintf(2, ", ");
    print_flags((long long int)reg, ARRAYSIZE(flagsmap), flagsmap);
    return (0);
}