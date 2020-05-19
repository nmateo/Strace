/*
** EPITECH PROJECT, 2018
** idk
** File description:
** idk
*/

#include "../include/trace.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>

static const struct flag_s flags[] = {
    {.flag = S_IFMT, .name = "S_IFMT"},
    {.flag = S_IFSOCK, .name = "S_IFSOCK"},
    {.flag = S_IFLNK, .name = "S_IFLNK"},
    {.flag = S_IFREG, .name = "S_IFREG"},
    {.flag = S_IFBLK, .name = "S_IFBLK"},
    {.flag = S_IFDIR, .name = "S_IFDIR"},
    {.flag = S_IFCHR, .name = "S_IFCHR"},
    {.flag = S_IFIFO, .name = "S_IFIFO"},
    {.flag = S_ISUID, .name = "S_ISUID"},
    {.flag = S_ISGID, .name = "S_ISGID"},
    {.flag = S_ISVTX, .name = "S_ISVTX"},
    {.flag = S_IRWXU, .name = "S_IRWXU"},
    {.flag = S_IRUSR, .name = "S_IRUSR"},
    {.flag = S_IWUSR, .name = "S_IWUSR"},
    {.flag = S_IWUSR, .name = "S_IWUSR"},
    {.flag = S_IRWXG, .name = "S_IRWXG"},
    {.flag = S_IRGRP, .name = "S_IRGRP"},
    {.flag = S_IWGRP, .name = "S_IWGRP"},
    {.flag = S_IXGRP, .name = "S_IXGRP"},
    {.flag = S_IRWXO, .name = "S_IRWXO"},
    {.flag = S_IROTH, .name = "S_IROTH"},
    {.flag = S_IWOTH, .name = "S_IWOTH"},
    {.flag = S_IXOTH, .name = "S_IXOTH"}
};

int print_stat_struct(pid_t child, unsigned long long reg)
{
    struct stat st;

    if (read_buf(reg, child, sizeof(st), &st))
        return (0);
    dprintf(2, "{st_mode=");
    print_flags(st.st_mode, ARRAYSIZE(flags), flags);
    dprintf(2, "|%u, st_size=%lu, ...}", st.st_mode, st.st_size);
    return (0);
}