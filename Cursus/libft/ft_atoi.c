/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 04:19:34 by rrhrara           #+#    #+#             */
/*   Updated: 2019/11/13 15:28:44 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkint(char *str, int sign)
{
	int		i;
	char	*test;

	i = 0;
	test = str;
	while (test[i] >= '0' && test[i] <= '9')
	{
		i++;
	}
	if (i > 11)
	{
		if (sign < 0)
			return (0);
		else
			return (-1);
	}
	return (1);
}

int			ft_atoi(char *str)
{
	int i;
	int sign;

	sign = 1;
	i = 0;
	while (*str == '\n' || *str == '\r' || *str == '\f'
			|| *str == '\v' || *str == '\t' || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	if (checkint(str, sign) == 0)
		return (0);
	else if (checkint(str, sign) == -1)
		return (-1);
	else
		while (*str >= '0' && *str <= '9')
			i = i * 10 + *str++ - 48;
	return (i * sign);
}
