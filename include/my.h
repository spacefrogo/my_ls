/*
** EPITECH PROJECT, 2018
** header
** File description:
** bre
*/

#ifndef _MY_H_
#define _MY_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <limits.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <ncurses.h>
#include <dirent.h>
#include <pwd.h>
#include <time.h>
#include <grp.h>

char	*my_strdup(char *);
char    *my_strcpy(char *, char const *);
int     my_getnbr(char *);
char    *my_strcat(char *, char *);
int     fs_open_file(char const *);
void 	my_putchar(char);
int     my_strlen(char *);
int	my_printf(char*, ...);
int	my_put_nbr_base(int, char *);
int	my_putstr(char *);
char    *my_strdup(char *);
int     count_chars(char const *);
void    help_function(DIR *);
char	*my_itoa(int);
char    *my_revstr(char *);
static int my_count_digits_rec(int, int);
int	my_count_digits(int);
void    do_rights(int, char *);
void	do_print(char *);
int     do_stat(char *);
void    help_stat(char *, char *, int, int);
void    help_stat_again(char *);
void    set_type(char *);
void    help_function_one(DIR *);
int     my_ls_with_l(char *);

#endif // _MY_H_
