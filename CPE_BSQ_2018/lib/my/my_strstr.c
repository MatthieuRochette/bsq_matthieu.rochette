/*
** EPITECH PROJECT, 2018
** strcpy
** File description:
** copy a string
*/

char *my_strstr(char *str, char const *to_find)
{
    int i;
    int x;

    for (i = 0; to_find[i] != '\0'; i++);
    for (x = 0; str[x] != '\0'; x ++) {
        if (str[x] == to_find[x]) {
            return (0);
        }
    }
    return (0);
}