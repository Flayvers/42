/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disp_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 16:22:53 by rrhrara           #+#    #+#             */
/*   Updated: 2020/01/27 19:40:37 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static uintmax_t	get_nbr(t_tab *tab)
{
	uintmax_t	nbr;

	if (tab->conv_flag == 'D')
		nbr = (unsigned long)(va_arg(tab->args, unsigned long int));
	else if (ft_strcmp(tab->arg, "hh") == 0)
		nbr = (unsigned char)(va_arg(tab->args, unsigned int));
	else if (ft_strcmp(tab->arg, "h") == 0)
		nbr = (unsigned short)(va_arg(tab->args, unsigned int));
	else if (ft_strcmp(tab->arg, "ll") == 0)
		nbr = (unsigned long long)(va_arg(tab->args, unsigned long long int));
	else if (ft_strcmp(tab->arg, "l") == 0)
		nbr = (unsigned long)(va_arg(tab->args, unsigned long int));
	else
		nbr = (unsigned int)(va_arg(tab->args, unsigned int));
	nbr = (uintmax_t)nbr;
	return (nbr);
}

static int			get_len(uintmax_t nbr)
{
	int len;

	len = 1;
	while ((nbr /= 10) > 0)
		len++;
	return (len);
}

static t_tab		*disp_u2(t_tab *tab, uintmax_t num, int width, int al)
{
	int			printed;

	printed = width;
	if (width <= tab->prec)
		printed = tab->prec;
	tab->len += (printed <= tab->width) ? tab->width : printed;
	if (!al)
		disp_sp(tab, ' ', tab->width - printed, 0);
	disp_sp(tab, '0', tab->prec - width, 0);
	ft_putnbrumax_fd(num, 1);
	if (al)
		disp_sp(tab, ' ', tab->width - printed, 0);
	return (tab);
}

t_tab				*disp_u(t_tab *tab)
{
	uintmax_t	nbr;
	int			width;
	int			al;

	al = 0;
	nbr = get_nbr(tab);
	if (nbr == 0 && tab->prec == 0)
	{
		disp_sp(tab, ' ', tab->width, 1);
		return (tab);
	}
	width = get_len(nbr);
	if (tab->flag[0] == '-')
		al = 1;
	if (tab->flag[1] == '0' && tab->prec == -1 && !tab->flag[0])
		tab->prec = tab->width;
	disp_u2(tab, nbr, width, al);
	return (tab);
}
