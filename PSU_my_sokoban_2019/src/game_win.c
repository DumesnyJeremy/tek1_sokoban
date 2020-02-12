/*
** EPITECH PROJECT, 2019
** sokaban window
** File description:
** The program will es the space bar
*/

#include "../include/my.h"

void find_o(char **map, int colm, int line, int sc)
{
    int i;
    int a;
    int nbr_o = 0;
    for (i = 0 ; map[i] != NULL; i++)
        nbr_o = compt_o(map, a, &i, nbr_o);
    if (nbr_o == 0) {
        exit(0);
    }
}