/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   displayer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 16:24:55 by rrhrara           #+#    #+#             */
/*   Updated: 2020/01/27 19:49:18 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_tab	*displayer(t_tab *tab)
{
	char	conv;

	conv = tab->conv_flag;
	if (conv == 'c')
		disp_c(tab);
	else if (conv == 's')
		disp_s(tab);
	else if (conv == 'p')
		disp_p(tab);
	else if (conv == 'd' || conv == 'D' || conv == 'i')
		disp_d(tab);
	else if (conv == 'u' || conv == 'U')
		disp_u(tab);
	else if (conv == 'x' || conv == 'X')
		disp_x(tab);
	else
		disp(tab);
	return (tab);
}
