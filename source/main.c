/*
** EPITECH PROJECT, 2019
** project
** File description:
** my_ls
*/

#include "my.h"

int	my_ls(char *name)
{
    DIR *dir;

    if (!name)
        name = ".";
    dir = opendir(name);
    if (!dir) {
        my_putstr("ls: cannot access ");
        my_putstr("'");
        my_putstr(name);
        my_putstr("':");
        my_putstr(" No such file or directory");
        my_putchar('\n');
        exit(84);
    }
    help_function(dir);
    return (0);
}

void	help_function(DIR *dir)
{
    struct dirent *read;

    for(; (read = readdir(dir));) {
        if (read->d_name[0] != '.') {
            my_putstr(read->d_name);
            my_putchar('\n');
        }
    }
    closedir(dir);
}

int     my_ls_with_l(char *name)
{
    DIR *dir = opendir(name);
    struct stat *file_stats;
    struct dirent *read;

    if (!name)
        name = ".";
    if (!dir)
        exit(84);

    my_putstr("total 180\n");
    for (read = readdir(dir); read != NULL; read = readdir(dir)) {
        if (read->d_name[0] != '.')
            do_stat(read->d_name);
    }
    return (0);
}

int	main(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'l') {
        my_ls_with_l(".");
        return (0);
    }
    if (ac > 2 && av[1][0] == '-' && av[1][1] == 'l') {
        do_stat(av[2]);
        return (0);
    } else
        my_ls(av[1]);
    return (0);
}
