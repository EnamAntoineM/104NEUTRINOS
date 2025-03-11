/*
** EPITECH PROJECT, 2024
** 104NEUTRINOS
** File description:
** errormsg.c
*/

#include "../include/my.h"

void errormsg(int type)
{
    if (type == 1) {
    fprintf(stderr, "104Neutrinos : Not enough arguments\nTry again !\nEnter "
                    "104Neutrinos -h for help");
    exit(84);
    } else if (type == 2) {
    fprintf(stderr, "104Neutrinos : Invalid value !\nTry again !\n");
    exit(84);
    } else if (type == 3) { 
    fprintf(stderr, "104Neutrinos : Too many arguments\nTry again !\nEnter"
                    " 104Neutrinos -h for help");
    exit(84);
    }
}
