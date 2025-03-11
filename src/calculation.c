/*
** EPITECH PROJECT, 2024
** 104NEUTRINOS
** File description:
** calculation.c
*/

#include "../include/my.h"

void calculation(long double old_amean, long double old_nbr,
    long double nvalue,
    long double old_std_deviation,
    long double old_nharm_mean,
    size_t new_nbr)
{
    char invalues[256];
    long double invalue;
    long double narth_mean = (((old_amean * old_nbr) + nvalue)) / (new_nbr);
    long double n_variance =
        ((pow(old_std_deviation, 2) * old_nbr) +
        pow((nvalue - narth_mean), 2)) /
        new_nbr;
    long double nstrd_deviation = sqrt(n_variance);
    long double rms = sqrt(n_variance + pow(narth_mean, 2));
    long double nharm_mean =
        new_nbr / ((old_nbr / old_nharm_mean) + (1 / nvalue));

    print(nstrd_deviation, narth_mean, rms, nharm_mean);
    fgets(invalues, sizeof(invalues), stdin);
    invalues[strcspn(invalues, "\n")] = '\0';
    valid_input(invalues);
    invalue = strtod(invalues, NULL);
    if (strcmp(invalues, "END") != 0 && invalue != 0) {
    stuff(new_nbr, old_nbr);
    calculation(narth_mean, old_nbr, invalue, nstrd_deviation, nharm_mean,
                new_nbr);
    } else if (strcmp(invalues, "END") == 0 && invalue == 0) {
    exit(0);
    }
    else{
    errormsg(2);
    }
}
