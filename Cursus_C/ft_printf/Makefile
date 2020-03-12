# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/16 15:57:01 by rrhrara           #+#    #+#              #
#    Updated: 2020/01/27 19:34:16 by rrhrara          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CC_FLAGS = -Wall -Wextra -Werror
PATH_OPRINTF = ./src/
PATH_SPRINTF = ./src/
PATH_IPRINTF = ./includes/
PATH_OLIBFT = ./libft/
PATH_SLIBFT = ./libft/
PATH_ILIBFT = ./libft/
FILESLIBFT = ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_strlen.c \
	  ft_atoi.c \
	  ft_putnbr_fd.c \
	  ft_split.c \
	  ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_toupper.c \
	  ft_strdup.c \
	  ft_strjoin.c \
	  ft_strlcat.c \
	  ft_strlcpy.c \
	  ft_tolower.c \
	  ft_strncmp.c \
	  ft_strnstr.c \
	  ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_isascii.c \
	  ft_isalnum.c \
	  ft_memccpy.c \
	  ft_memmove.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_calloc.c \
	  ft_substr.c \
	  ft_itoa.c \
	  ft_strmapi.c \
	  ft_strtrim.c \
	  ft_putendl_fd.c \
	  ft_strcmp.c \
	  ft_strndup.c \
	  ft_itoa_base.c \
	  ft_strnew.c \
	  ft_putnbrumax_fd.c \
	  ft_putnbrmax_fd.c \

FILESPRINTF = ft_printf.c \
			  parser.c \
			  displayer.c \
			  disp_c.c \
			  disp_s.c \
			  disp_p.c \
			  disp_d.c \
			  disp_u.c \
			  disp_x.c \
			  disp.c \
			  disp_wchar.c \

SLIBFT = $(addprefix $(PATH_SLIBFT), $(FILESLIBFT))
OLIBFT = $(addprefix $(PATH_OLIBFT), $(FILESLIBFT:.c=.o))
ILIBFT = $(addprefix $(PATH_ILIBFT), libft.h)
SPRINTF = $(addprefix $(PATH_SPRINTF), $(FILESPRINTF))
OPRINTF = $(addprefix $(PATH_OPRINTF), $(FILESPRINTF:.c=.o))
IPRINTF = $(addprefix $(PATH_IPRINTF), ft_printf.h)

all : $(NAME)

$(NAME) : $(OLIBFT) $(OPRINTF)
	ar rcs $(NAME) $(OPRINTF) $(OLIBFT)

$(PATH_OLIBFT)%.o : $(PATH_SLIBFT)%.c $(ILIBFT)
	$(CC) $(CC_FLAGS) -o $@ -c $< -I $(PATH_ILIBFT)

$(PATH_OPRINTF)%.o : $(PATH_SPRINTF)%.c $(IPRINTF)
	$(CC) $(CC_FLAGS) -o $@ -c $< -I $(PATH_IPRINTF)

clean :
	rm -f $(OLIBFT) $(OPRINTF)

fclean : clean
	rm -f $(NAME)

re : fclean all
