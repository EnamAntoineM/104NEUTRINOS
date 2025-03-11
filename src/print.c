/*
** EPITECH PROJECT, 2024
** 104NEUTRINOS
** File description:
** print.c
*/

#include "../include/my.h"

void print(long double arg1, long double arg2, long double arg3,
    long double arg4)
{
    printf("  Standard deviation: %.2Lf\n", arg1);
    printf("  Arithmetic mean:    %.2Lf\n", arg2);
    printf("  Root mean square:   %.2Lf\n", arg3);
    printf("  Harmonic mean:      %.2Lf\n", arg4);
    printf("Enter a value :");
}

