/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 17:40:06 by rrhrara           #+#    #+#             */
/*   Updated: 2020/01/22 17:51:19 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char *src, size_t n)
{
	size_t	i;
	size_t	len;
	char	*str;

	i = 0;
	len = ft_strlen(src);
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (i < len && i < n)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
