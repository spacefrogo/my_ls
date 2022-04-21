/*
** EPITECH PROJECT, 2019
** Epitech
** File description:
** project
*/

#include "my.h"

char	*my_strdup(char *src)
{
    char *dest = malloc((my_strlen(src) + 1) * sizeof(char));
    if (!dest)
        my_putstr("my_strdup: wtf? it doesnt exist\n");

    dest = my_strcpy(dest, src);
    return dest;
}
