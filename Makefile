##
## makefile for makefile in /home/maxim/piscine/My_FTL
## 
## Made by MAXIM Elena 
## Login   <maxim_e@etna-alternance.net>
## 
## Started on  Mon Apr 10 19:31:37 2017 MAXIM Elena 
## Last update Thu May 11 16:57:37 2017 TRAORE Mahamadou
##

CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= sta
SRC	= main.c 		\
          getCreature.c		\
          readline.c 		\
          my_string.c		\
          midgard.c

OBJS	= $(SRC:.c=.o)

RM  	= rm -f 

all     :	$(NAME)

$(NAME) :	$(OBJS)
		$(CC) $(OBJS) -o $(NAME) $(CFLAGS)

clean   :
		$(RM) $(OBJS)

fclean  :	clean
		$(RM) $(NAME)

re      :	fclean all

.PHONY  :	all clean fclean re
