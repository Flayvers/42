/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:21:02 by rrhrara           #+#    #+#             */
/*   Updated: 2019/11/07 16:21:33 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *lastlst;

	lastlst = lst;
	if (lastlst == NULL)
		return (0);
	while (lastlst->next)
	{
		lastlst = lastlst->next;
	}
	return (lastlst);
}
