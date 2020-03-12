/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disp_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 16:17:10 by rrhrara           #+#    #+#             */
/*   Updated: 2020/01/27 19:48:57 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_tab	*disp_c(t_tab *tab)
{
	char	c;

	c = (char)va_arg(tab->args, int);
	if (tab->flag[1] == '0' && tab->flag[0] != '-')
		disp_sp(tab, '0', tab->width - 1, 1);
	else if (tab->flag[0] != '-')
		disp_sp(tab, ' ', tab->width - 1, 1);
	write(1, &c, 1);
	tab->len += 1;
	if (tab->flag[0] == '-')
		disp_sp(tab, ' ', tab->width - 1, 1);
	return (tab);
}
