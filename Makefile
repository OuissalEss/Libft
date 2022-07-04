# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oessamdi <oessamdi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 13:03:22 by oessamdi          #+#    #+#              #
#    Updated: 2021/11/23 20:12:21 by oessamdi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

SRC = 	ft_substr.c ft_strmapi.c ft_strjoin.c ft_itoa.c ft_bzero.c ft_isascii.c \
		ft_memchr.c ft_memmove.c ft_strlcpy.c ft_strnstr.c ft_toupper.c ft_isalnum.c \
		ft_isdigit.c ft_memcmp.c ft_memset.c  ft_strlen.c ft_strlcat.c ft_strrchr.c \
		ft_atoi.c ft_isalpha.c ft_isprint.c ft_memcpy.c ft_strdup.c ft_calloc.c ft_strchr.c \
		ft_split.c ft_strncmp.c ft_tolower.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_strtrim.c \

SRCB =	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

CFLAGS = -Wall -Wextra -Werror

OBJC = $(SRC:.c=.o)

BNOBJC = $(SRCB:.c=.o)


$(NAME):
	$(CC) $(CFLAGS) -c $(SRC)
	ar -rc $(NAME) $(OBJC)

$(BNOBJC):
	$(CC) $(CFLAGS) -c $(SRCB)
	ar -rc $(NAME) $(BNOBJC)

all: $(NAME)

bonus: $(BNOBJC)

clean:
	rm -f $(OBJC) $(BNOBJC)

fclean: clean
	rm -f $(NAME)

re : fclean all
