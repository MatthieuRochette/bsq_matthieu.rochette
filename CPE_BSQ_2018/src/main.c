/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** main.c
*/

#include "../include/my.h"
#include "../include/struct.h"

int get_map_err_check(char *map)
{
    int len = my_getnbr(map);

    if (len <= 0) {
        free(map);
        write(2, INVALID_SIZE_MAP, my_strlen(INVALID_SIZE_MAP));
        exit(INVALID_SIZE_ERR);
    } else
        return (len);
}

int check_error_arg(char *map)
{
    int test = 0;
    int j;

    for (j = 0; map[j] != '\n'; j++);
    j++;
    for (; map[j] != '\0'; j++) {
        test = map[j] == '.' || map[j] == 'o'  || '\n' ? 0 : 1;
        if (test == 1) {
            write(2, INVALID_MAP_MSG, my_strlen(INVALID_MAP_MSG));
            return (INVALID_MAP_ERR);
        }
    }
    return (0);
}

int main(int ac, char **av)
{
    int err = 0;

    if (ac != 2) {
        write(2, BAD_ARGS_MSG, my_strlen(BAD_ARGS_MSG));
        return (BAD_ARGS_ERR);
    }
    err = bsq(av);
    return (err);
}