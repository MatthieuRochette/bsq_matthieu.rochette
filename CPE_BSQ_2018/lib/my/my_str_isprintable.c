/*
** EPITECH PROJECT, 2018
** str upcase
** File description:
** transform everything in upcase
*/
int my_str_isprintable(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i ++) {
        if (str[i] < 32)
            return (0);
    }
    return (1);
}