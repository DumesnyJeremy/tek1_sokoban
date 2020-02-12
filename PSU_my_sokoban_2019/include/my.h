/*
** EPITECH PROJECT, 2019
** sokaban window
** File description:
** The prog presses the space bar
*/
#include <curses.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef MY_H
#define MY_H

int main(int ac, char **av);
char **cloc(char **map, int line, int colm);
void type(char **map);
void start(void);

char **create_map(char const *filepath);
char **char_to_charr(char *file, int w, int nbtt);
char **display_map(char **map, int line, int colm);
char **save_map(char *file, int w, int nbtt);

int m_right(char **map, int line, int colm, int *ptr);
int m_left(char **map, int line, int colm, int *ptr);
int m_up(char **map, int line, int colm, int *ptr);
int m_down(char **map, int line, int colm, int *ptr);

int find_x_o(char **map, int col, char *file);
int compt_x(char **map, int a, int *i, int nbr_x);
int compt_o(char **map, int a, int *i, int nbr_o);
int find_p(char **map, int col, char *file);
void find_o(char **map, int colm, int line, int sc);

int mr_o(char **map, int line, int colm, int *ptr);
int ml_o(char **map, int line, int colm, int *ptr);
int mu_o(char **map, int line, int colm, int *ptr);
int md_o(char **map, int line, int colm, int *ptr);

void check_map(char *file);
int my_putstr(char const *str);
void my_puchar(char c);

#endif