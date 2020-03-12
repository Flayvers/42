/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 10:43:26 by rrhrara           #+#    #+#             */
/*   Updated: 2020/01/13 07:09:07 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoin(char *s1, char *s2)
{
	char	*res;

	res = NULL;
	if (s1 && s2)
	{
		if (!(res = (char *)malloc(sizeof(char) *
						(ft_strlen(s1) + ft_strlen(s2) + 1))))
			return (0);
		ft_strlcpy(res, s1, (unsigned int)(ft_strlen(s1) + 1));
		ft_strlcat(res, s2, (unsigned int)(ft_strlen(res) + ft_strlen(s2)) + 1);
	}
	return (res);
}
