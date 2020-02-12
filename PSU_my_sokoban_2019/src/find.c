/*
** EPITECH PROJECT, 2019
** sokaban window
** File description:
** The program will exit by erasing the screen
*/

#include "../include/my.h"

int find_p(char **map, int col, char *file)
{
    int i = 0;
    int a = 0;
    int colm = 0;
    int line = 0;
    for (i = 0 ; map[i] != NULL; i++)
        for (a = 0 ; map[i][a] != '\0'; a++)
            if (map[i][a] == 'P') {
                line = a;
                colm = i;
            }
    find_x_o(map, col, file);
    display_map(map, line, colm);
}

int find_x_o(char **map, int col, char *file)
{
    int nbr_x;
    int i;
    int a = 0;
    for (i = 0; map[i] != NULL; i++)
        nbr_x = compt_x(map, a, &i, nbr_x);
    int nbr_o;
    for (i = 0 ; map[i] != NULL; i++)
        nbr_o = compt_o(map, a, &i, nbr_o);
    if (nbr_x != nbr_o) {
        exit(84);
    }
}

int compt_x(char **map, int a, int *i, int nbr_x)
{
    for (a = 0 ; map[*i][a] != '\0'; a++)
        if (map[*i][a] == 'X')
            nbr_x++;
    return (nbr_x);
}

int compt_o(char **map, int a, int *i, int nbr_o)
{
    for (a = 0 ; map[*i][a] != '\0'; a++)
        if (map[*i][a] == 'O')
            nbr_o++;
    return (nbr_o);
}