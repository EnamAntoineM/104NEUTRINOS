/*
** EPITECH PROJECT, 2024
** 104NEUTRINOS
** File description:
** is_num.c
*/

#include "../include/my.h"

void valid_entry(char **entry)
{   
    for (size_t i = 1; i < 5; i++){
        for (size_t j = 0; j < strlen(entry[i]) && strcmp(entry[i], "END") != 0; j++){
            if (entry[i][j] >= '0' && entry[i][j] <= '9'){
                continue;
            }
            else {
                errormsg(2);
            }
        }
    }
}
