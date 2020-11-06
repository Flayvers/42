/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 16:23:56 by rrhrara           #+#    #+#             */
/*   Updated: 2019/11/13 17:42:50 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res;

	i = 0;
	j = 0;
	if (dest && src)
	{
		res = (unsigned int)ft_strlen(src);
		if (size)
		{
			while (src[i] && i < size - 1)
			{
				dest[i] = src[i];
				i++;
			}
			if (dest[i] != '\0')
				dest[i] = '\0';
		}
		return (res);
	}
	return (0);
}
