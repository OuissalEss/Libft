# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oessamdi <oessamdi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 13:03:22 by oessamdi          #+#    #+#              #
#    Updated: 2021/11/12 12:36:05 by oessamdi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
INC = ./
SRC = ft_substr.c ft_strjoin.c ft_itoa.c ft_bzero.c ft_isascii.c ft_memchr.c ft_memmove.c ft_strlcpy.c ft_strnstr.c ft_toupper.c ft_isalnum.c ft_isdigit.c ft_memcmp.c ft_memset.c  ft_strlen.c ft_strlcat.c ft_strrchr.c ft_atoi.c ft_isalpha.c ft_isprint.c ft_memcpy.c ft_strdup.c ft_calloc.c ft_strchr.c ft_split.c ft_strncmp.c ft_tolower.c
FLAGS = -Wall -Wextra -Werror
ARG = -c
OUT = *.o

all: 
	$(CC) $(ARG) $(FLAGS) $(SRC) -I $(INC)
	ar rc $(NAME) $(OUT)
clean:
	rm *.o
fclean:
	rm -f $(NAME)
	rm -f *.o
re : fclean all
