/*
** EPITECH PROJECT, 2024
** 104NEUTRINOS
** File description:
** is_num_input.c
*/

#include "../include/my.h"

void valid_input(char *input)
{
    for (size_t i = 0; i < strlen(input); i++){
        if (strcmp(input, "END") != 0){
            if (input[i] >= '0' && input[i] <= '9'){
                continue;
            }
            else {
                errormsg(2);
            }
        }
    } 
}
