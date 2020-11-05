/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:27:47 by rrhrara           #+#    #+#             */
/*   Updated: 2019/11/05 14:39:36 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, int n)
{
	unsigned char *dst;
	unsigned char *sr;

	dst = (unsigned char *)dest;
	sr = (unsigned char *)src;
	if (!((dest == (void *)0) && src == (void *)0))
	{
		while (n-- > 0)
		{
			*dst = *sr;
			if (n)
			{
				dst++;
				sr++;
			}
		}
	}
	return (dest);
}
