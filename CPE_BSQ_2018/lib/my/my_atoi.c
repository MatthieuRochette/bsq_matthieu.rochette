/*
** EPITECH PROJECT, 2017
** my_atoi.c
** File description:
** my_atoi.c
*/

int my_atoi(char const *str)
{
    int nb = 0;

    while (*str >= '0' && *str <= '9') {
        nb = nb * 10 + (*str - 48);
        str++;
    }
    return (nb);
}
