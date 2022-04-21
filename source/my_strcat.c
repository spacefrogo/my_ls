/*
** EPITECH PROJECT, 2019
** Epitech
** File description:
** Project
*/

#include "my.h"

char	*my_strcat(char *dest, char *src)
{
    int i = 0;
    int len = my_strlen(dest);

    for (;src[i] != '\0'; i++)
        dest[i + len] = src[i];
    dest[i + len] = '\0';
    return dest;
}
