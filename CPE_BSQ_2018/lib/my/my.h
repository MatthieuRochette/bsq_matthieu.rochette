/*
** EPITECH PROJECT, 2018
** header
** File description:
** Day 11
*/

#include <stdlib.h>
#include <unistd.h>

#ifndef	MY_H
#define MY_H

void my_swap(int *a, int *b);
char *my_strupcase(char *str);
char *my_strstr(char *str, char const *to_find);
char *my_strncpy(char *dest, char const *src, int n);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncat(char *dest, char const *src, int nb);
char *my_strlowcase(char *str);
int my_strlen(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isalpha(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcat(char *dest, char const *src);
char make_uppercase(char a_char,char p_char, int i);
char *my_strlowcase2(char *str);
int my_showstr(char const *str);
void my_putchar(char c);
int my_showmem(char const *str, int size);
char *my_revstr(char *str);
int my_putstr(char const *str);
void my_print_nbr(int pow, int nb, int digits_nb);
int my_is_prime(int nb);
int my_isneg(int n);
int my_getnbr(char const *str);
int my_find_prime_sup(int nb);
int my_compute_square_root(int nb);
int my_compute_power_rec(int nb, int p);
void check_neg(char prev_char, int *neg);
void check_still_nb(int prev_char, int act_char, int *still_nb);
void test_validity(long *nb, int *final_nb, int *neg);
int my_put_nbr(int nb);
int my_getpow(int digits_nb);
void my_sort_int_array(int *tab, int size);
char *my_strcapitalize(char *str);
int my_atoi(char const *str);

#endif /* MY_H */
