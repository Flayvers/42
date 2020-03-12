# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/04 11:22:10 by rrhrara           #+#    #+#              #
#    Updated: 2020/02/26 12:29:49 by rrhrara          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Werror -Wall -Wextra
RM = rm -f
SRC = ft_putchar_fd.c ft_putstr_fd.c ft_strlen.c ft_atoi.c ft_putnbr_fd.c ft_split.c ft_isalpha.c ft_isdigit.c ft_isprint.c ft_toupper.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_tolower.c ft_strncmp.c ft_strnstr.c ft_memset.c ft_bzero.c ft_memcpy.c ft_isascii.c ft_isalnum.c ft_memccpy.c ft_memmove.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c ft_calloc.c ft_substr.c ft_itoa.c ft_strmapi.c ft_strtrim.c ft_putendl_fd.c
INC = ./inc/
BNS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
BOBJ = $(BNS:.c=.o)
OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ
		ranlib $(NAME)

%.o: %.c
		$(CC) -I. -o $@ -c $? $(CFLAGS)

all: $(NAME)

clean:
		$(RM) $(OBJ) $(BOBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

bonus:	$(BOBJ)
		ar rc $(NAME) $(BOBJ)
		ranlib $(NAME)

.PHONY: clean flcean re all bonus
