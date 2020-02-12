/*
** EPITECH PROJECT, 2019
** sokaban window
** File description:
** The program will exiresses the space bar
*/

#include "../include/my.h"

int m_right(char **map, int line, int colm, int *ptr)
{
    mr_o(map, line, colm, ptr);
    if (map[colm][line + 1] == 'O') {
        map[colm][line] = ' ';
        map[colm][++line] = 'P';
        (*ptr)++;
        return line;
    }
    if (*ptr == 1) {
        map[colm][line] = 'O';
        map[colm][++line] = 'P';
        *ptr = 0;
        return line;
    }
    if (map[colm][line + 1] != '#' && map[colm][line + 1] != 'X'
    && map[colm][line + 1] != 'O') {
        map[colm][line] = ' ';
        map[colm][++line] = 'P';
    }
    return line;
}

int m_left(char **map, int line, int colm, int *ptr)
{
    ml_o(map, line, colm, ptr);
    if (map[colm][line - 1] == 'O') {
        map[colm][line] = ' ';
        map[colm][--line] = 'P';
        (*ptr)++;
        return line;
    }
    if (*ptr == 1) {
        map[colm][line] = 'O';
        map[colm][--line] = 'P';
        *ptr = 0;
        return line;
    }
    if (map[colm][line - 1] != '#' && map[colm][line - 1] != 'X'
    && map[colm][line - 1] != 'O') {
        map[colm][line] = ' ';
        map[colm][--line] = 'P';
    }
    return line;
}

int m_up(char **map, int line, int colm, int *ptr)
{
    mu_o(map, line, colm, ptr);
    if (map[colm - 1][line] == 'O') {
        map[colm][line] = ' ';
        map[--colm][line] = 'P';
        (*ptr)++;
        return colm;
    }
    if (*ptr == 1) {
        map[colm][line] = 'O';
        map[--colm][line] = 'P';
        *ptr = 0;
        return colm;
    }
    if (map[colm - 1][line] != '#' && map[colm - 1][line] != 'X'
    && map[colm - 1][line] != 'O') {
        map[colm][line] = ' ';
        map[--colm][line] = 'P';
    }
    return colm;
}

int m_down(char **map, int line, int colm, int *ptr)
{
    md_o(map, line, colm, ptr);
    if (map[colm + 1][line] == 'O') {
        map[colm][line] = ' ';
        map[++colm][line] = 'P';
        (*ptr)++;
        return colm;
    }
    if (*ptr == 1) {
        map[colm][line] = 'O';
        map[++colm][line] = 'P';
        *ptr = 0;
        return colm;
    }
    if (map[colm + 1][line] != '#' && map[colm + 1][line] != 'X'
    && map[colm + 1][line] != 'O') {
        map[colm][line] = ' ';
        map[++colm][line] = 'P';
    }
    return colm;
}