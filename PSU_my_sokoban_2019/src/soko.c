/*
** EPITECH PROJECT, 2019
** sokaban window
** File description:
** The program will ees the space bar
*/

#include "../include/my.h"

char **cloc(char **map, int line, int colm)
{
    int c = 0;
    int on_o = 0;
    for (int compt_move = 1, *ptr = &on_o; c != 27; compt_move++) {
        if (c == KEY_RIGHT)
            line = m_right(map, line, colm, ptr);
        if (c == KEY_LEFT)
            line = m_left(map, line, colm, ptr);
        if (c == KEY_UP)
            colm = m_up(map, line, colm, ptr);
        if (c == KEY_DOWN)
            colm = m_down(map, line, colm, ptr);
        type(map);
        find_o(map, colm, line, compt_move);
        c = getch();
    }
}

void type(char **map)
{
    for (int b = 0, yess = 0; map[b] != NULL; b++, yess++) {
        mvprintw(yess, 0, map[b]);
        refresh();
    }
}