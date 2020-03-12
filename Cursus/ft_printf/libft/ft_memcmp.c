/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:55:39 by rrhrara           #+#    #+#             */
/*   Updated: 2019/11/05 13:42:14 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s3;
	unsigned char *s4;

	s3 = (unsigned char *)s1;
	s4 = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*s3 != *s4)
			return (*s3 - *s4);
		s3++;
		s4++;
	}
	return (0);
}
