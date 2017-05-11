##
## makefile for makefile in /home/maxim/piscine/My_FTL
## 
## Made by MAXIM Elena 
## Login   <maxim_e@etna-alternance.net>
## 
## Started on  Mon Apr 10 19:31:37 2017 MAXIM Elena 
## Last update Thu May 11 10:47:46 2017 MAXIM Elena 
##

CC	=       gcc

NAME	=       sta

SRC	=       main.c	        \
                getCreature.c	\
                readline.c	\
                introduction.c	\
                battle.c	\
                final.c         \

OBJ     =       $(SRC: .c = .o)

RM  =           rm -f 

CFLAGS  =       -W -Wall -Wextra -Werror


$NAME:		$(OBJ)
		$(CC) $(OBJ) -o $(NAME) $(CFLAGS)
all:		$(NAME)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

.PHONY:		fclean all

re:		fclean all
