# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: loswaldo <loswaldo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/01 17:49:04 by loswaldo          #+#    #+#              #
#    Updated: 2020/11/21 15:29:35 by loswaldo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h 
FLAG = -Wall -Wextra -Werror
OPTION = -c -I.
SRC =	ft_toupper.c	\
		ft_tolower.c	\
		ft_memset.c		\
		ft_memcpy.c		\
		ft_isalnum.c	\
		ft_isdigit.c	\
		ft_isprint.c 	\
		ft_isascii.c	\
		ft_isalpha.c	\
		ft_bzero.c		\
		ft_atoi.c		\
		ft_strlen.c		\
		ft_memchr.c		\
		ft_strlcpy.c	\
		ft_substr.c		\
		ft_memccpy.c	\
		ft_memmove.c	\
		ft_calloc.c		\
		ft_strdup.c		\
		ft_memcmp.c		\
		ft_strchr.c		\
		ft_strrchr.c	\
		ft_strncmp.c	\
		ft_strlcat.c	\
		ft_strnstr.c	\
		ft_putchar_fd.c	\
		ft_putstr_fd.c	\
		ft_putendl_fd.c	\
		ft_itoa.c		\
		ft_putnbr_fd.c	\
		ft_strjoin.c	\
		ft_strtrim.c	\
		ft_split.c		\
		ft_strmapi.c

		
		
		
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTION) $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
