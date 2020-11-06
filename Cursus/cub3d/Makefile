MLX = -lmlx -lm -framework OpenGL -framework AppKit
#MLX = -I /usr/include -g -L /usr/lib -lX11 -lmlx -lXext -lm -fsanitize=address

NAME = cub3D

SRCS = 	cub3d.c \
		utils/get_next_line.c \
		sources/parser.c

SRCS_LIB =	libft/ft_strndup.c \
			libft/ft_isnum.c \
			libft/ft_putchar_fd.c \
			libft/ft_putstr_fd.c \
			libft/ft_strlen.c \
			libft/ft_atoi.c \
			libft/ft_putnbr_fd.c \
			libft/ft_split.c \
			libft/ft_isalpha.c \
			libft/ft_isdigit.c \
			libft/ft_isprint.c \
			libft/ft_toupper.c \
			libft/ft_strdup.c \
			libft/ft_strjoin.c \
			libft/ft_strlcat.c \
			libft/ft_strlcpy.c \
			libft/ft_tolower.c \
			libft/ft_strncmp.c \
			libft/ft_strnstr.c \
			libft/ft_memset.c \
			libft/ft_bzero.c \
			libft/ft_memcpy.c \
			libft/ft_isascii.c \
			libft/ft_isalnum.c \
			libft/ft_memccpy.c \
			libft/ft_memmove.c \
			libft/ft_strchr.c \
			libft/ft_strrchr.c \
			libft/ft_memchr.c \
			libft/ft_memcmp.c \
			libft/ft_calloc.c \
			libft/ft_substr.c \
			libft/ft_itoa.c \
			libft/ft_strmapi.c \
			libft/ft_strtrim.c \
			libft/ft_putendl_fd.c

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