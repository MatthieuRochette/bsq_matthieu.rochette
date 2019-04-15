/*
** EPITECH PROJECT, 2018
** str upcase
** File description:
** transform everything in upcase
*/

char *my_strlowcase2(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i ++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    return (str);
}

char make_uppercase(char a_char,char p_char, int i)
{
    if (i == 0 && (a_char > 96 || a_char < 123))
        a_char = a_char - 32;
    if (p_char == 32 || p_char == '+' || p_char == '-') {
        if (a_char <= '0' || a_char >= '9' && (a_char >= 97 || a_char <= 122))
            a_char = a_char - 32;
    }
    return (a_char);
}

char *my_strcapitalize(char *str)
{
    int i;
    int j;

    str = my_strlowcase2(str);
    for (i = 0; str[i] != '\0'; i ++) {
        j = i - 1;
        str[i] = make_uppercase(str[i], str[j], i);
    }
    return (str);
}