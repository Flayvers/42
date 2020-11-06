/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 13:25:08 by rrhrara           #+#    #+#             */
/*   Updated: 2020/02/24 15:06:48 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int		ft_error(char *text)
{
	if (text != NULL)
		free(text);
	return (-1);
}

char	*newline(char *text, char **line, int ret)
{
	int		i;
	char	*dst;

	i = 0;
	dst = NULL;
	if (text != NULL)
	{
		while (text[i] != '\n' && text[i] != '\0')
			i++;
		*line = ft_strndup(text, i);
		if (ret)
			dst = ft_substr(text, i + 1, (ft_strlen(text) - i));
	}
	free(text);
	return (dst);
}

int		get_next_line(int fd, char **line)
{
	static char		*text;
	char			buf[BUFFER_SIZE + 1];
	int				ret;

	if (fd < 0 || line == NULL || read(fd, buf, 0) < 0 || BUFFER_SIZE < 1)
		return (-1);
	ret = 1;
	while (ret > 0 && ft_strchr(text, '\n') == NULL)
	{
		if ((ret = read(fd, buf, BUFFER_SIZE)) < 0)
			return (ft_error(text));
		buf[ret] = '\0';
		text = ft_strjoin(text, buf);
	}
	text = newline(text, line, ret);
	if (ret == 0)
		free(text);
	if (ret > 1)
		ret = 1;
	return (ret);
}
