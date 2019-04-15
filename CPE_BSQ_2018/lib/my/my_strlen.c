/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** test
*/
void my_putchar(char c);
/*{
    write(1, &c, 1);
}*/
int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i ++;
    }
    return (i);
}