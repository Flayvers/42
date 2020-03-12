/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:39:53 by rrhrara           #+#    #+#             */
/*   Updated: 2019/11/05 12:43:38 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, int n)
{
	unsigned char *i;

	i = (unsigned char *)s;
	while (n-- > 0)
	{
		if (*i == (unsigned char)c)
			return ((void *)i);
		i++;
	}
	return (0);
}
