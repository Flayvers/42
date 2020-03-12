/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:42:32 by rrhrara           #+#    #+#             */
/*   Updated: 2019/11/04 15:31:50 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *i;

	i = (unsigned char *)s;
	if (n == 0)
		return (s);
	while (n--)
	{
		*i = (unsigned char)c;
		if (n)
			i++;
	}
	return (s);
}
