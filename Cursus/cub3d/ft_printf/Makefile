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

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/22 10:43:56 by rchallie          #+#    #+#              #
#    Updated: 2020/01/17 08:57:55 by rchallie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MLX = -lmlx -lm -framework OpenGL -framework AppKit
#MLX = -I /usr/include -g -L /usr/lib -lX11 -lmlx -lXext -lm -fsanitize=address

NAME = ft_printf.a

SRCS = 	./srcs/ft_printf.c 	\
	./srcs/disp.c		\
	./srcs/disp_d.c		\
	./srcs/disp_s.c		\
	./srcs/disp_wchar.c	\
	./srcs/displayer.c	\
	./srcs/parser.c		\
	./srcs/disp_c.c		\
	./srcs/disp_p.c		\
	./srcs/disp_u.c		\
	./srcs/disp_x.c		\
	

OBJSRCS = $(SRCS:.c=.o) 

$(NAME) : $(OBJSRCS)
	@echo "\033[33m[Remove last version...]"
	@rm -rf ft_printf.a
	@echo "\033[33m[libft compilation...]"
	@$(MAKE) -C ./libft
	@echo "\033[33m[ft_printf compilation...]"
	@gcc $(OBJSRCS) -I./includes -I./usr/include -Wall -Wextra -Werror ./libft/libft.a -o $(NAME)
	@echo "\033[33m[Done !]"

all : $(NAME)

clean :
	rm -rf $(OBJSRCS)
	$(MAKE) clean -C ./libft

fclean : clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)
	rm -rf cub3d.bmp

re : fclean all
