/*
** EPITECH PROJECT, 2018
** strcmp
** File description:
** compare 2 strings
*/

int my_strcmp(char const *s1, char const *s2)
{
    int s1_len;
    int s2_len;

    for (s1_len = 0; s1[s1_len] != '\0'; s1_len ++);
    for (s2_len = 0; s2[s2_len] != '\0'; s2_len ++);
    if (s1_len > s2_len)
        return (s1_len - s2_len);
    else if (s1_len == s2_len)
        return (0);
    else
        return (s1_len - s2_len);
}