# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tblancha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/30 16:52:04 by tblancha          #+#    #+#              #
#    Updated: 2019/07/02 01:11:03 by tblancha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	fillit.a

SRC =	check_all.c \
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

OBJ =	$(SRC:.c=.o)

HEADER =fillit.h

FLAG =	-Wall -Werror -Wextra

$(NAME) :
		gcc $(FLAG) -c $(SRC)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

all :	$(NAME)

clean :
		/bin/rm -f $(OBJ)

fclean :	clean
		/bin/rm -f $(NAME)

re : fclean all

wo : fclean all clean

main : wo
		gcc $(FLAG) $(NAME) main.c libft/libft.a
		/bin/rm -f $(OBJ)
