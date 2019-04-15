/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** struct.h
*/

#ifndef STRUCT_H
#define STRUCT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include "my.h"

#define VALID(l) (i - l >= 0 && j - l >= 0)

#define BAD_ARGS_MSG "Invalid arguments.\n"
#define INVALID_SIZE_MAP "Invalid map size (equal or less than zero)\n"
#define INVALID_MAP_MSG "Invalid map\n"

#define BAD_ARGS_ERR 84
#define INVALID_SIZE_ERR 84
#define INVALID_MAP_ERR 84

typedef struct map {
    int size;
    char *full_map;
    int height;
    int width;
} map_t;

typedef struct square_infos {
    int size;
    int x_pos;
    int y_pos;
} square_t;

int **manage_obstacles(char **parsed_map, map_t map);
int give_value_to_case(char **parsed_map, int **obst_map, int i, int j);
char **parse_map_in_lines(map_t map);
map_t get_map(char *pathname);
int check_error_arg(char *map);
int bsq(char **av);
char **find_bsq(char **parsed_map, int **obst_map, map_t map);
square_t is_new_bsq(square_t sqr, int **o_map, int i, int j);
int get_map_err_check(char *map);

#endif