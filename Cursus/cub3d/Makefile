MLX = -lmlx -lm -framework OpenGL -framework AppKit
#MLX = -I /usr/include -g -L /usr/lib -lX11 -lmlx -lXext -lm -fsanitize=address

NAME = cub3D

SRCS = 	cub3d.c \
		utils/get_next_line.c \
		sources/parser.c

SRCS_LIB = ft _strndup.c ft_isnum.c ft_putchar_fd.c ft_putstr_fd.c ft_strlen.c ft_atoi.c ft_putnbr_fd.c ft_split.c ft_isalpha.c ft_isdigit.c ft_isprint.c ft_toupper.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_tolower.c ft_strncmp.c ft_strnstr.c ft_memset.c ft_bzero.c ft_memcpy.c ft_isascii.c ft_isalnum.c ft_memccpy.c ft_memmove.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c ft_calloc.c ft_substr.c ft_itoa.c ft_strmapi.c ft_strtrim.c ft_putendl_fd.c

OBJSRCS = $(SRCS:.c=.o)

OBJLIB = $(SRCS_LIB:.c=.o)

$(NAME) : $(OBJSRCS)
	@echo "\033[33m[Remove last version...]"
	@rm -rf Cub3D
	#@echo "\033[33m[Libft compilation...]"
	#@$(MAKE) bonus -C ./libft
	@echo "\033[33m[Cub3D compilation...]"
	@gcc $(OBJSRCS) $(SRCS_LIB) -I./includes -I./usr/include -Wall -Wextra -Werror $(MLX) -o $(NAME)
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