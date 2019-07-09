# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tblancha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/30 16:52:04 by tblancha          #+#    #+#              #
#    Updated: 2019/07/09 04:11:56 by tblancha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		fillit.a

SRC_NAME =	check_all.c \
			check_i.c \
			check_lh.c \
			check_lv.c \
			check_o.c \
			check_rh.c \
			check_rv.c \
			check_s.c \
			check_th.c \
			check_tv.c \
			check_z.c \
			ft_cmptetritab.c \
			ft_filltab.c \
			ft_minsquare.c \
			ft_nbtetri.c \
			ft_newposition.c \
			initialization.c \
			lenmaxtetri.c \
			recupdata.c \
			reinipos.c \
			reversetetri.c \
			backtracking.c \
			ft_printfinaltab.c \

OBJ_NAME =		$(SRC_NAME:.c=.o)

SRCDIR =	./src/

OBJDIR =	./obj/

SRC =		${addprefix $(SRCDIR), $(SRC_NAME)}

OBJ =		${addprefix $(OBJDIR), $(OBJ_NAME)}

HEADER =	src/fillit.h

FLAG =		-Wall -Werror -Wextra

LIBFT =		libft/libft.a

LIB =		make -C libft

all :		$(NAME)

$(NAME) :	lib
			gcc $(FLAG) -c $(SRC) $(HEADER)
			ar rc $(NAME) $(OBJ_NAME)
			ranlib $(NAME)
			mv $(OBJ_NAME) ./obj
			gcc $(FLAG) -o fillit $(NAME) $(LIBFT) ./src/main.c

lib :
			make -C libft

clean :
			/bin/rm -f $(OBJ)
			make -C libft clean

fclean :	clean
			/bin/rm -f $(NAME) fillit
			make -C libft fclean

re : 		fclean all
			make -C libft re

