/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 13:58:02 by rrhrara           #+#    #+#             */
/*   Updated: 2020/02/24 14:41:04 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

char		*ft_substr(char *s, unsigned int start, size_t len);
size_t		ft_strlen(char *str);
char		*ft_strndup(char *s1, int n);
char		*ft_strchr(char *s, char c);
char		*ft_strjoin(char *s1, char *s2);
size_t		ft_strlcpy(char *dst, char *src, size_t dstsize);
char		*newline(char *text, char **line, int ret);
int			get_next_line(int fd, char **line);

#endif
