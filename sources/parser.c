/*
** EPITECH PROJECT, 2018
** idk
** File description:
** idk
*/

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include "../include/trace.h"
#include <string.h>


static int help(void)
{
    dprintf(0, "USAGE: ./strace [-s] [-p <pid>|<command>]\n");
    return (0);
}

static trc_t *init_trace(const int ac, const char **av)
{
    trc_t *trace = malloc(sizeof(trc_t));
    if (trace == NULL)
        return (NULL);
    trace->flags = 0;
    trace->pid = 0;
    trace->command = NULL;
    trace->eargs = NULL;
    trace->alignment = 0;
    trace->argv = malloc(ac * sizeof(char *));
    if (trace->argv == NULL)
        return (NULL);
    for (int j = 0; j < ac; j++) {
        trace->argv[j] = strdup(av[j]);
        if (trace->argv[j] == NULL)
            return (NULL);
    }
    return (trace);
}

char **get_exec_args(int argc, char **argv, int j)
{
    int	i = 0;

    char **eargs = calloc(argc - j + 1, sizeof(char *));
    if (eargs == NULL)
        return (NULL);
    for (; j + i < argc; i++) {

        eargs[i] = (char *)argv[j + i];
    }
    eargs[i] = NULL;
    return (eargs);
}

static trc_t *parse_args_cmd(const int ac, char **av, trc_t *trace)
{
    if (trace->flags & OPT_PID)
        return (trace);
    for (size_t i = 1; i != (size_t)ac; i++)
        if (av[i][0] != '-') {
            trace->command = (char *)av[i];
            trace->eargs = get_exec_args((int)ac, av, i);
            break;
        }
    if (trace->command == NULL) {
        help();
        return (NULL);
    }
    return (trace);
}

trc_t *parse_args(const int ac, const char **av)
{
    int opt;
    char *eptr;
    trc_t *trace = init_trace(ac, av);
    if (trace == NULL)
        return NULL;
    opterr = 0;
    while ((opt = getopt((int)ac, (char **)av, "p:s")) != -1)
        switch (opt) {
            case 's': trace->flags |= OPT_DETAILLED;
                break;
            case 'p': trace->pid = strtol(optarg, &eptr, BASE);
                trace->flags |= OPT_PID;
                break;
            default: break;
        }
    return (parse_args_cmd(ac, trace->argv, trace));
}
