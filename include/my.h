/*
** EPITECH PROJECT, 2024
** my.h
** File description:
** Prototype
*/

#ifndef MY_H
    #define MY_H
    #include "math.h"
    #include "stdio.h"
    #include "stdlib.h"
    #include "unistd.h"
    #include <dirent.h>
    #include <stdarg.h>
    #include "sys/stat.h"
    #include "sys/types.h"
    #include "errno.h"
    #include <pwd.h>
    #include <grp.h>
    #include <time.h>
    #include <string.h>
    #include "memory.h"
    void psign_entry(char **entry);
    void psign_input(char *input);
    void valid_input(char *input);
    void valid_entry(char **entry);
    void Neutrihelp();
    void errormsg(int type);
    void print(long double arg1, long double arg2, long double arg3,
    long double arg4);
    void stuff(size_t num1, size_t num2);
    void calculation(long double old_amean, long double old_nbr,
    long double nvalue,
    long double old_std_deviation,
    long double old_nharm_mean,
    size_t new_nbr);
    void start(long double old_amean, long double old_nbr,
    long double old_std_deviation, long double old_nharm_mean);

#endif // MY_H
