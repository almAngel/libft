# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: angel <angel@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/02 12:42:29 by angellop          #+#    #+#              #
#    Updated: 2024/12/12 21:25:37 by angel            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

COMPILER = cc

CFLAGS = -Wall -Werror -Wextra

SRC =	ft_isalpha.c	ft_toupper.c	\
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

OFILES = $(SRC:.c=.o)
INCLUDE = libft.h

all: $(NAME) clean

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

clean: 
	rm -f $(OFILES)

fclean: clean 
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re