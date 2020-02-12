/*
** EPITECH PROJECT, 2019
** sokaban window
** File description:
** The program willsses the space bar
*/

#include "../include/my.h"

char **display_map(char **map, int line, int colm)
{
    int c = 0;
    initscr();
    curs_set(FALSE);
    keypad(stdscr, TRUE);
    noecho();
    cloc(map, line, colm);
    endwin();
    return 0;
}

char **char_to_charr(char *file, int w, int nbtt)
{
    int i = 0, j = 0, z = 0;
    char **map = malloc(sizeof(char *) * (w + 1));
    for (z = 0; z < nbtt ; z++, j++) {
        if (file[z] == '\n') {
            map[i] = malloc(sizeof(char) * (j + 1));
            i++;
            j = 0;
        }
    }
    map[i] = malloc(sizeof(char) * (j + 1));
    for (int c = 0, i = 0, j = 0; c < z ; c++, j++) {
        if (file[c] == '\n') {
            map[i][j] = '\0';
            c++, i++, j = 0;
        }
        map[i][j] = file[c];
    }
    i++;
    map[i] = NULL;
    find_p(map, i, file);
}

char **create_map(char const *filepath)
{
    int y = 0;
    int w = 1;
    struct stat sb;
    stat(filepath, &sb);
    int h = sb.st_size;
    char *file = malloc(sizeof(char) * (h + 1));
    int fd = open(filepath, O_RDONLY);
    if (fd == -1)
        exit (84);
    read(fd, file, h);
    file[h] = '\0';
    for (; file[y] != '\0'; y++) {
        if (file[y] == '\n')
            w++;
    }
    check_map(file);
    char_to_charr(file, w, y);
}

void check_map(char *file)
{
    for (int y = 0; file[y] != '\0'; y++)
        if (file[y] != ' ' && file[y] != 'X'
        && file[y] != 'O' && file[y] != 'P'
        && file[y] != '#' && file[y] != '\n')
        exit(84);
}

int main(int ac, char **av)
{
    char *desc = "USAGE\n     ./my_sokoban map\nDESCRIPTION\n"
    "map file representing the warehouse map, containing ‘#’ for walls, \n"
    "‘P’ for the player, ‘X’ for boxes and ‘O’ for storage locations.\n";
    if (av[1][0] == '-' && av[1][1] == 'h')
        my_putstr(desc);
    else
        create_map(av[1]);
}