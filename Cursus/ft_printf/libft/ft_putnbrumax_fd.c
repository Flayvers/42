/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrumax_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 19:33:32 by rrhrara           #+#    #+#             */
/*   Updated: 2020/01/22 19:34:34 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbrumax_fd(uintmax_t n, int fd)
{
	if (n > 9)
		ft_putnbrumax_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}
