/*
** EPITECH PROJECT, 2019
** epitech
** File description:
** project
*/

#include "my.h"

char	*my_itoa(int nb)
{
    short sign = (nb < 0);
    char *str = malloc(my_count_digits(nb) + sign + 1);
    short left = 0;
    unsigned int i = 0;
    nb = (nb < 0) ? -nb : nb;

    do {
        left = nb % 8;
        nb = nb / 8;
        str[i++] = left + '0';
    } while (nb > 0);
    if (sign)
        str[i++] = '-';
    str[i] = '\0';
    return my_revstr(str);
}
