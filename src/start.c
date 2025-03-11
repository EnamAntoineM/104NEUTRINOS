/*
** EPITECH PROJECT, 2024
** 104NEUTRINOS
** File description:
** start.c
*/

#include "../include/my.h"

void start(long double old_amean, long double old_nbr,
    long double old_std_deviation, long double old_nharm_mean)
{
    char nvalues[256];
    long double nvalue;
    size_t new_nbr;

    if (old_nbr != 0 && old_amean != 0 && old_nharm_mean != 0 &&
        old_std_deviation != 0) {
    new_nbr = old_nbr + 1;
    printf("Enter a value :");
    fgets(nvalues, sizeof(nvalues), stdin);
    nvalues[strcspn(nvalues, "\n")] = 0;
    valid_input(nvalues);
    nvalue = strtod(nvalues, NULL);
    if (nvalue == 0 && (strcmp(nvalues, "END") != 0)) {
        errormsg(2);
    }
    if (strcmp(nvalues, "END") != 0) {
        printf("  Number of values:   %zu\n", new_nbr);
        calculation(old_amean, old_nbr, nvalue,
                    old_std_deviation, old_nharm_mean,
                    new_nbr);
    }
    } else {
    errormsg(2);
    }
}
