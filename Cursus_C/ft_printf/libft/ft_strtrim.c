/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:09:22 by rrhrara           #+#    #+#             */
/*   Updated: 2019/11/07 16:33:56 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	findstart(char const *str, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == set[j])
		{
			i++;
			j = 0;
		}
		j++;
		if (j == ft_strlen((char*)set) && set[j] != str[i])
			return (i);
	}
	return (i);
}

static int	findend(char	const *str, const char *set)
{
	int	i;
	int	j;
	int	r;

	i = ft_strlen((char*)str) - 1;
	j = -1;
	r = 0;
	while (i > 0)
	{
		j++;
		if (str[i] == set[j])
		{
			i--;
			j = -1;
		}
		if (j >= ft_strlen((char*)set))
			return (i);
	}
	return (ft_strlen((char*)str) - 1);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		len;
	int		i;

	if (s1 && set)
	{
		len = findend(s1, set) - findstart(s1, set);
		i = 0;
		if (!(res = (char*)malloc(sizeof(char) * len + 2)))
			return (0);
		while (i <= len)
		{
			res[i] = s1[findstart(s1, set) + i];
			i++;
		}
		res[i] = 0;
		return (res);
	}
	return (0);
}
