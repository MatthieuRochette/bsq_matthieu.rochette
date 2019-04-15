/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** find the biggest square
*/
#include "../include/struct.h"

square_t is_new_bsq(square_t sqr, int **o_map, int i, int j)
{
    int up = i - sqr.size <= 0 ? 0 : o_map[i - sqr.size][j];
    int left = j - sqr.size <= 0 ? 0 : o_map[i][j - sqr.size];
    int diag = i - sqr.size <= 0 || j - sqr.size <= 0 ?
            0 : o_map[i - sqr.size][j - sqr.size];
    int act = o_map[i][j];
    int test = 1;

    while (test == 1) {
        if (act - up - left + diag == 0 && VALID(sqr.size + 1)) {
            sqr.x_pos = j;
            sqr.y_pos = i;
            sqr.size++;
            up = i - (sqr.size + 1) <= 0 ? 0 : o_map[i - (sqr.size + 1)][j];
            left = j -  (sqr.size + 1) <= 0 ? 0 : o_map[i][j - (sqr.size + 1)];
            diag = i - (sqr.size + 1) <= 0 || j - (sqr.size + 1) <= 0 ?
                    0 : o_map[i - (sqr.size + 1)][j - (sqr.size + 1)];
        } else
            test = 0;
    }
    return (sqr);
}

char **find_bsq(char **parsed_map, int **obst_map, map_t map)
{
    square_t bsq;
    int i;
    int j;

    bsq.size = 0;
    for (i = 0; i < map.height; i++) {
        for (j = 0; j < map.width; j++) {
            bsq = is_new_bsq(bsq, obst_map, i, j);
        }
    }
    bsq.size--;
    for (i = bsq.y_pos; i > bsq.y_pos - bsq.size; i--) {
        for (j = bsq.x_pos; j > bsq.x_pos - bsq.size; j--) {
            parsed_map[i][j] = 'x';
        }
    }
    return (parsed_map);
}

int bsq(char **av)
{
    char *pathname = av[1];
    map_t map = get_map(pathname);
    int test = check_error_arg(map.full_map) == INVALID_SIZE_ERR ? 84 : 0;
    char **parsed_map = parse_map_in_lines(map);
    int **obstacles_map = manage_obstacles(parsed_map, map);
    char **final_map = find_bsq(parsed_map, obstacles_map, map);

    if (test == INVALID_SIZE_ERR)
        return (test);
    for (int j = 0; final_map[j] != NULL; j++) {
        write(1, final_map[j], map.width);
        write(1, "\n", 1);
    }
    free(map.full_map);
    for (int i = 0; i < map.height; i++) {
        free(parsed_map[i]);
        free(obstacles_map[i]);
    }
    free(parsed_map);
    free(obstacles_map);
    return (0);
}