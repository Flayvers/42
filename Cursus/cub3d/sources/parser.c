#include "./includes/cub3d.h"

int	parser (t_window *win)
{
	int 	fd;
	int		j;
	char	*line;

	j = 0;
	if ((fd = open(win->set_name, O_RDONLY)) < 0)
	{
		write(1, "settings file couldn't open", 28);
		return (ERROR);
	}
	if (!(line = malloc(sizeof(char))))
		return (ERROR);
	if ((j = get_next_line(fd, &line)) > 0)
	{
		if (!(check_line_R(line, win)))
		{
			free(line);
			return(0);
		}
		free(line);
	}
	return(1);
}

int	check_line_R(char *line, t_window *win)
{
	char	**split;

	split = ft_split(line, ' ');

	if (split[0][0] == 'R' && split[3] == '\n')
	{
		if (ft_isnum(split[1]))
			win->heigh = ft_atoi(split[1]);
		if (ft_isnum(split[2]))
			win->width = ft_atoi(split[2])
	}
	return (1);
}