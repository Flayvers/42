#ifndef CUB3D_H
# define CUB3D_H

# define ESC 53
# define TOWARD 13
# define BACKWARD 1
# define LEFT 0
# define RIGHT 2
# define CAM_LEFT 123
# define CAM_RIGHT 124
# define CAMUP 126
# define CAMDOWN 125

# define ERROR_INF -1
# define ERROR 0
# define SUCCES 1
# define NEXT 2

# include "../libft/libft.h"
# include "utils.h"
# include <mlx.h>
# include <math.h>
# include <time.h>
#include <stdlib.h>

typedef	struct			s_window
{
	void				*mlx_ptr;
	void				*win_ptr;
	void				*mlx_win;
	int					heigh;
	int					width;
	int					color_floor;
	int					color_ceiling;
	char				*NO;
	char				*SO;
	char				*WE;
	char				*EA;
	char				*set_name;
}						t_window;

int		parser(t_window *win);
int		check_line_R(char *line, t_window *win);

#endif