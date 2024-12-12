# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: angel <angel@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/02 12:42:29 by angellop          #+#    #+#              #
#    Updated: 2024/12/12 20:01:17 by angel            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

COMPILER = cc

CFLAGS = -Wall -Werror -Wextra

FILES =	ft_isalpha.c	ft_toupper.c	\
		ft_isdigit.c	ft_tolower.c	\
		ft_isalnum.c	ft_strchr.c		\
		ft_isascii.c	ft_strrchr.c	\
		ft_isprint.c	ft_strncmp.c	\
		ft_strlen.c		ft_memchr.c		\
		ft_memset.c		ft_memcmp.c		\
		ft_bzero.c		ft_strnstr.c	\
		ft_memcpy.c		ft_atoi.c		\
		ft_memmove.c	ft_calloc.c		\
		ft_strlcpy.c	ft_strdup.c		\
		ft_strlcat.c	ft_substr.c		\
		ft_strjoin.c	ft_strtrim.c	\
		ft_split.c		
		
OBJ = $(SRC:.c=.o)
INCLUDE = libft.h

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE) $(LIB) $(NAME) $(BONUSOBJ) $(OBJ)

bonus: $(OBJ) $(BONUSOBJ) $(INCLUDE) $(LIB) $(NAME) $(BONUSOBJ) $(OBJ)

%.o: %.c $(COMPILER) $(CFLAGS) -c -o $@ $<

clean:
	rm -rdf $(wildcard */*.o)

fclean: clean
	rm -f $(NAME)

re: fclean all

rebonus: fclean bonus

.PHONY: all clean fclean re purge norme