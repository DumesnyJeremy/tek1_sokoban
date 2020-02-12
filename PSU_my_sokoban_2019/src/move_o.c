/*
** EPITECH PROJECT, 2019
** sokaban window
** File description:
** The program will exit by erasin the space bar
*/

#include "../include/my.h"

int mr_o(char **map, int line, int colm, int *ptr)
{
    if (map[colm][line + 1] == '#') {
        map[colm][line] = 'P';
    }
    if (map[colm][line + 1] == 'X' && map[colm][line + 2] != '#') {
        if (map[colm][line + 2] != 'X') {
            map[colm][line] = ' ';
            map[colm][line + 1] = 'P';
            map[colm][line + 2] = 'X';
        }
    }
}

int ml_o(char **map, int line, int colm, int *ptr)
{
    if (map[colm][line - 1] == '#') {
        map[colm][line] = 'P';
    }
    if (map[colm][line - 1] == 'X' && map[colm][line - 2] != '#') {
        if (map[colm][line - 2] != 'X') {
            map[colm][line] = ' ';
            map[colm][line - 1] = 'P';
            map[colm][line - 2] = 'X';
        }
    }
}

int mu_o(char **map, int line, int colm, int *ptr)
{
    if (map[colm - 1][line] == '#') {
        map[colm][line] = 'P';
    }
    if (map[colm - 1][line] == 'X' && map[colm - 2][line] != '#') {
        if (map[colm - 2][line] != 'X') {
            map[colm][line] = ' ';
            map[colm - 1][line] = 'P';
            map[colm - 2][line] = 'X';
        }
    }
}

int md_o(char **map, int line, int colm, int *ptr)
{
    if (map[colm + 1][line] == '#') {
        map[colm][line] = 'P';
    }
    if (map[colm + 1][line] == 'X' && map[colm + 2][line] != '#') {
        if (map[colm + 2][line] != 'X') {
            map[colm][line] = ' ';
            map[colm + 1][line] = 'P';
            map[colm + 2][line] = 'X';
        }
    }
}