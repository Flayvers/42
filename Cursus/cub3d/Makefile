/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Makefile                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 04:19:34 by rrhrara           #+#    #+#             */
/*   Updated: 2019/11/13 15:28:44 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

MLX = -lmlx -lm -framework OpenGL -framework AppKit
#MLX = -I /usr/include -g -L /usr/lib -lX11 -lmlx -lXext -lm -fsanitize=address

NAME = cub3D

SRCS = 	cub3d.c \
		utils/putstr_info.c \
		utils/get_next_line.c \
		utils/get_next_line_utils.c \

OBJSRCS = $(SRCS:.c=.o) 

$(NAME) : $(OBJSRCS)
	@echo "\033[33m[Remove last version...]"
	@rm -rf Cub3D
	@echo "\033[33m[Libft & ft_printf compilation...]"
	@$(MAKE) -C ./ft_printf
	@echo "\033[33m[Cub3D compilation...]"
	@gcc $(OBJSRCS) -I ./includes -I./usr/include -Wall -Wextra -Werror $(MLX) ./ft_printf/ft_printf.a -o $(NAME)
	@echo "\033[33m[Done !]"

all : $(NAME)

clean :
	rm -rf $(OBJSRCS)
	$(MAKE) clean -C ./ft_printf

fclean : clean
	$(MAKE) fclean -C ./ft_printf
	rm -rf $(NAME)
	rm -rf cub3d.bmp

re : fclean all