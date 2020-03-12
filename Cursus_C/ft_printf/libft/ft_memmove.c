/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:01:24 by rrhrara           #+#    #+#             */
/*   Updated: 2019/11/07 16:24:02 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	unsigned char		*sr;
	size_t				i;

	i = 0;
	dst = (unsigned char *)dest;
	sr = (unsigned char *)src;
	if (!((dest == (void *)0) && src == (void *)0))
	{
		if (sr < dst)
			while (++i <= n)
				dst[n - i] = sr[n - i];
		else
			while (n-- > 0)
				*(dst++) = *(sr++);
	}
	return (dest);
}
