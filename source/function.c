/*
** EPITECH PROJECT, 2019
** project
** File description:
** epitech
*/

#include "my.h"

int	do_stat(char *name)
{
    if (!name)
        exit(84);
    struct stat buf;

    stat(name, &buf);
    char *str = my_itoa(buf.st_mode);
    struct group *grp = getgrgid(buf.st_gid);
    struct passwd *pws = getpwuid(buf.st_uid);
    char *f = pws->pw_name;
    char *f1 = grp->gr_name;
    int d = buf.st_size;
    int a = buf.st_nlink;
    int k = my_strlen(str);

    set_type(name);
    do_rights(k, str);
    help_stat(f, f1, a, d);
    help_stat_again(name);
    return (0);
}

void	help_stat_again(char *name)
{
    do_print(name);
    my_putchar(' ');
    my_putstr(name);
    my_putchar('\n');
}

void	help_stat(char *f, char *f1, int a, int d)
{
    my_putstr(" ");
    my_put_nbr_base(a, "0123456789");
    my_putstr(" ");
    my_putstr(f);
    my_putstr(" ");
    my_putstr(f1);
    my_putstr(" ");
    my_put_nbr_base(d, "0123456789");
}

void    do_print(char *name)
{
    struct stat buf;
    char mtime[100];

    stat(name, &buf);
    my_strcpy(mtime, ctime(&buf.st_mtime));

    int k = my_strlen(mtime) - 10;

    my_putchar(' ');
    for(int i = 4; i <= k; i++)
        my_putchar(mtime[i]);
}

void    do_rights(int k, char *str)
{
    for(int i = k - 3; i <= k; i++) {
        if (str[i] == '7')
            my_putstr("rwx");
        if (str[i] == '6')
            my_putstr("rw-");
        if (str[i] == '5')
            my_putstr("r-x");
        if (str[i] == '4')
            my_putstr("r--");
        if (str[i] == '3')
            my_putstr("-wx");
        if (str[i] == '2')
            my_putstr("-w-");
        if (str[i] == '1')
            my_putstr("--x");
    }
}
