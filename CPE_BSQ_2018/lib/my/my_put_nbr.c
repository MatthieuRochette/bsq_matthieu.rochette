/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** Task07 CPool_Day03_2018
*/
#include <stdlib.h>

void my_putchar(char c);

void my_print_nbr(int pow, int nb, int digits_nb)
{
    int j = 0;
    int my_char;
    int nb_pos = nb;

    do {
        my_char = nb_pos / pow;
        my_putchar(my_char + '0');
        nb_pos = nb_pos % pow;
        pow = pow / 10;
        j = j + 1;
    } while (j < digits_nb);
}

int my_getpow(int digits_nb)
{
    int exponent = 10;
    int i;

    if (digits_nb > 1) {
        for (i = 0 ; i < (digits_nb - 2) ; i ++) {
            exponent = exponent * 10;
        }
    } else
        exponent = 1;
    return (exponent);
}

int my_put_nbr(int nb)
{
    int pow;
    int my_count = 0;
    int nb_original = nb;

    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
        nb_original *= -1;
    }
    while (nb > 0) {
        nb /= 10;
        my_count ++;
    }
    pow = my_getpow(my_count);
    my_print_nbr (pow, nb_original, my_count);
    return (0);
}