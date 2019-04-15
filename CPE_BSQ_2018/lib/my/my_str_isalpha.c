/*
** EPITECH PROJECT, 2018
** str upcase
** File description:
** transform everything in upcase
*/
#include <stdio.h>

int my_str_isalpha(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i ++) {
        if (str[i] < 'A' || str[i] > 'z' || (str[i] < 'a' && str[i] > 'Z') ){
            return (0);
        }
    }
    return (1);
}