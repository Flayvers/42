/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:46:58 by rrhrara           #+#    #+#             */
/*   Updated: 2019/11/05 12:54:30 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dest, const void *src, int c, int n)
{
	unsigned char *dst;
	unsigned char *sr;

	dst = (unsigned char *)dest;
	sr = (unsigned char *)src;
	while (n-- > 0)
	{
		*dst = *sr;
		if (*sr == (unsigned char)c)
			return (dst + 1);
		if (n)
		{
			dst++;
			sr++;
		}
	}
	return (0);
}
