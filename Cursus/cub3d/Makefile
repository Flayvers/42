MLX = -L./libft -lft -I/usr/local/include -L/usr/local/lib -lmlx -framework OpenGL -framework AppKit
MLX = -lmlx -lm -framework OpenGL -framework AppKit
#MLX = -I /usr/include -g -L /usr/lib -lX11 -lmlx -lXext -lm -fsanitize=address

NAME = cub3D

SRCS = 	cub3d.c \
		utils/get_next_line.c \
		sources/parser.c \

OBJSRCS = $(SRCS:.c=.o) 

$(NAME) : $(OBJSRCS)
	@echo "\033[33m[Remove last version...]"
	@rm -rf Cub3D
	@echo "\033[33m[Libft compilation...]"
	@$(MAKE) bonus -C ./libft
	@echo "\033[33m[Cub3D compilation...]"
	@gcc $(OBJSRCS) -I./includes -I/usr/local/include -L/usr/local/lib -Wall -Wextra -Werror $(MLX) ./libft/libft.a -o $(NAME)
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

bonus : $(NAME)