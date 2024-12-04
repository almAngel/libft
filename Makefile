# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: angellop <angellop@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/02 12:42:29 by angellop          #+#    #+#              #
#    Updated: 2024/12/03 17:34:47 by angellop         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

COMPILER = cc -g

CFLAGS = -Wall -Werror -Wextra

FILES = ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memset.c \
		ft_strlen.c \

all: $(NAME)

clean:
	rm -rdf $(wildcard */*.o)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re purge norme