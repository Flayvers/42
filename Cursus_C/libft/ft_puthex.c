/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 16:30:53 by rrhrara           #+#    #+#             */
/*   Updated: 2019/11/26 14:39:58 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putadress(unsigned long long int nb)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb / 16 > 0)
		ft_putadress(nb / 16);
	ft_putchar_fd(base[nb % 16], 1);
}

void	ft_puthex(unsigned int nb, int flag)
{
	char	*base;

	if (flag)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nb / 16 > 0)
		ft_puthex(nb / 16, flag);
	ft_putchar_fd(base[nb % 16], 1);
}

void	ft_putui(unsigned int nb)
{
	if (nb > 10)
		ft_putui(nb / 10);
	ft_putchar_fd(nb % 10 + 48, 1);
}
