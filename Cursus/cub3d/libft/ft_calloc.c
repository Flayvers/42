/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:01:39 by rrhrara           #+#    #+#             */
/*   Updated: 2019/11/13 18:19:58 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*mem;

	if (!(mem = malloc(count * size)))
		return (0);
	if (mem == NULL)
		return (NULL);
	bzero(mem, count * size);
	return (mem);
}
