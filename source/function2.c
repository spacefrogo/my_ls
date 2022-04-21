/*
** EPITECH PROJECT, 2019
** project
** File description:
** Epitech
*/

#include "my.h"

void    set_type(char *name)
{
    struct stat buf;

    stat(name, &buf);
    if (S_ISBLK(buf.st_mode))
        my_putstr("b");
    if (S_ISCHR(buf.st_mode))
        my_putstr("c");
    if (S_ISDIR(buf.st_mode))
        my_putstr("d");
    if (S_ISFIFO(buf.st_mode))
        my_putstr("f");
    if (S_ISLNK(buf.st_mode))
        my_putstr("l");
    if (S_ISREG(buf.st_mode))
        my_putstr("-");
    if (S_ISSOCK(buf.st_mode))
        my_putstr("s");
}
