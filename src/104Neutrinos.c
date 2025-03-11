/*
** EPITECH PROJECT, 2024
** 104NEUTRINOS
** File description:
** 104Neutrinos.c
*/

#include "../include/my.h"

int main(int argc, char **argv)
{
    size_t old_nbr;
    long double old_amean;
    long double old_nharm_mean;
    long double old_std_deviation;

    if (argc == 2) { 
    argv[1][strcspn(argv[1], "\n")] = 0;
    if (strcmp(argv[1], "-h") == 0){
        Neutrihelp();
    }
    }
    else if (argc < 5){
    errormsg(1);
    }
    else if(argc > 5){
    errormsg(3);
    }
    else {
    valid_entry(argv);
    old_nbr = strtod(argv[1], NULL);
    old_amean = strtod(argv[2], NULL);
    old_nharm_mean = strtod(argv[3], NULL);
    old_std_deviation = strtod(argv[4], NULL);
    start(old_amean, old_nbr, old_std_deviation, old_nharm_mean);
    }
    return 0;
}
