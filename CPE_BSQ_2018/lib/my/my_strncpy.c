/*
** EPITECH PROJECT, 2018
** strcpy
** File description:
** copy a string
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;
    int strlen;

    for (strlen = 0; src[strlen] != '\0'; strlen ++);
    for (i = 0; i < n; i ++) {
        dest[i] = src[i];
    }
    if (n > strlen)
        dest[i+1] = '\0';
    return (dest);
}