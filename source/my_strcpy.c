/*
** EPITECH PROJECT, 2019
** project
** File description:
** epitech
*/

#include "my.h"

char	*my_strcpy(char *drejtimi, char const *burimi)
{
    int i;

    for(i = 0; burimi[i] != '\0'; i++)
        drejtimi[i] = burimi[i];
    drejtimi[i] = '\0';
    return drejtimi;
}
