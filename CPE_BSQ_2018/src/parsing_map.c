/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** find the biggest square
*/

#include "../include/struct.h"

void err_free(char *buff)
{
    free(buff);
    exit(84);
}

map_t get_map(char *pathname)
{
    int x = 0;
    int i = 0;
    map_t new;
    char *buff = malloc(sizeof(char) * 100010048);
    int fd = open(pathname, O_RDONLY);

    if (fd == -1)
        err_free(buff);
    new.size = read(fd, buff, 100010048);
    if (new.size == -1 || new.size == 0)
        err_free(buff);
    new.full_map = malloc(sizeof(char) * (new.size + 1));
    for (; buff[i] != '\0'; i++)
        new.full_map[i] = buff[i];
    new.full_map[i] = '\0';
    new.height = get_map_err_check(new.full_map);
    for (; new.full_map[x] != '\n'; x++);
    x++;
    for (new.width = 0; new.full_map[x + new.width] != '\n'; new.width++);
    free(buff);
    return (new);
}

char **parse_map_in_lines(map_t map)
{
    int l_index = 0;
    int c_index = 0;
    int i = 0;
    char **tab = malloc(sizeof(char *) * (map.height + 1));

    for (; i < map.height; i++)
        tab[i] = malloc(sizeof(char) * (map.width + 1));
    tab[i] = NULL;
    for (i = 0; map.full_map[i] != '\n'; i++);
    i++;
    for (; map.full_map[i] != '\0'; i++) {
        if (map.full_map[i] == '\n') {
            l_index++;
            c_index = 0;
        } else {
            tab[l_index][c_index] = map.full_map[i];
            c_index++;
        }
    }
    return (tab);
}

int give_value_to_case(char **parsed_map, int **obst_map, int i, int j)
{
    int up = i == 0 ? 0 : obst_map[i - 1][j];
    int left = j == 0 ? 0 : obst_map[i][j - 1];
    int diag = i == 0 || j == 0 ? 0 : obst_map[i - 1][j - 1];
    int act = parsed_map[i][j] == '.' ? 0 : 1;
    int case_value = up + left - diag + act;
    return (case_value);
}

int **manage_obstacles(char **parsed_map, map_t map)
{
    int **obst_map = malloc((map.height + 1) * sizeof(int *));
    int i = 0;

    for (; i != map.height; i++) {
        obst_map[i] = malloc(sizeof(int) * map.width);
        for (int j = 0; j != map.width; j++) {
            obst_map[i][j] = give_value_to_case(parsed_map, obst_map, i, j);
        }
    }
    obst_map[i] = NULL;
    return (obst_map);
}