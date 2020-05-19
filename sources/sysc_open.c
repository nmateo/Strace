/*
** EPITECH PROJECT, 2018
** idk
** File description:
** idk
*/

#include "../include/trace.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

static const struct flag_s flags[] = {
    {.flag = O_APPEND, .name = "O_APPEND"},
    {.flag = O_RSYNC, .name = "O_RSYNC"},
    {.flag = O_CLOEXEC, .name = "O_CLOEXEC"},
    {.flag = O_CREAT, .name = "O_CREAT"},
    {.flag = O_DIRECTORY, .name = "O_DIRECTORY"},
    {.flag = O_EXCL, .name = "O_EXCL"},
    {.flag = O_NOCTTY, .name = "O_NOCTTY"},
    {.flag = O_NOFOLLOW, .name = "O_NOFOLLOW"},
    {.flag = O_NONBLOCK, .name = "O_NONBLOCK"},
    {.flag = O_SYNC, .name = "O_SYNC"},
    {.flag = O_TRUNC, .name = "O_TRUNC"},
    {.flag = O_RDONLY, .name = "O_RDONLY"},
    {.flag = O_WRONLY, .name = "O_WRONLY"},
    {.flag = O_RDWR, .name = "O_RDWR"},
};

int print_flags_open(pid_t child, unsigned long long reg)
{
    (void)(child);
    print_flags((long long int)reg, ARRAYSIZE(flags), flags);
    return (0);
}