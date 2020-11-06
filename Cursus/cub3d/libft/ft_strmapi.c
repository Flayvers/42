/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:26:30 by rrhrara           #+#    #+#             */
/*   Updated: 2019/11/07 16:27:04 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	i = 0;
	if (s && f)
	{
		if (!(res = (char *)malloc(sizeof(char) * ft_strlen((char*)s) + 1)))
			return (0);
		while (s[i])
		{
			res[i] = f(i, s[i]);
			i++;
		}
		res[i] = 0;
		return (res);
	}
	return (0);
}
