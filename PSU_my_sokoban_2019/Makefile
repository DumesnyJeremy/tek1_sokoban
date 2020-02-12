##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## oui
##

NAME	=	my_sokoban

SRC	=	src/my_popup.c \
		src/move_p.c \
		src/find.c \
		src/my_putstr.c \
		src/game_win.c \
		src/move_o.c \
		src/soko.c

OBJ	=	$(SRC:.c=.o)

all	:	$(NAME)

$(NAME) :	$(OBJ)
		gcc $(SRC) -o $(NAME) -lncurses -g3

clean	:
		rm -f $(OBJ)

fclean  :	clean
		rm -f $(NAME)

re	:	fclean all
