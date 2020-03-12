/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 22:11:43 by rrhrara           #+#    #+#             */
/*   Updated: 2019/11/13 19:01:07 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	size_t	i;
	size_t	len;

	len = 0;
	while (dest[len] && len < size)
		len += 1;
	i = len;
	while (src[len - i] && len + 1 < size)
	{
		dest[len] = src[len - i];
		len += 1;
	}
	if (i < size)
		dest[len] = '\0';
	return (i + ft_strlen(src));
}
