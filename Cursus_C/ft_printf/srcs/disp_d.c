/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disp_d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 16:20:19 by rrhrara           #+#    #+#             */
/*   Updated: 2020/02/18 16:52:33 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static intmax_t	get_nbr(t_tab *tab)
{
	intmax_t	nbr;

	if (tab->conv_flag == 'D')
		nbr = (long)(va_arg(tab->args, long int));
	else if (ft_strcmp(tab->arg, "hh") == 0)
		nbr = (signed char)(va_arg(tab->args, int));
	else if (ft_strcmp(tab->arg, "h") == 0)
		nbr = (short)(va_arg(tab->args, int));
	else if (ft_strcmp(tab->arg, "ll") == 0)
		nbr = (long long)(va_arg(tab->args, long long int));
	else if (ft_strcmp(tab->arg, "l") == 0)
		nbr = (long)(va_arg(tab->args, long int));
	else
		nbr = (int)(va_arg(tab->args, int));
	nbr = (intmax_t)nbr;
	return (nbr);
}

static int		get_len(intmax_t nbr)
{
	int len;

	if (nbr < 0)
		nbr *= -1;
	len = 1;
	while ((nbr /= 10) > 0)
		len++;
	return (len);
}

static char		get_prefix(t_tab *tab, int ng)
{
	char	*tmp;

	tmp = tab->flag;
	if (ng)
		return ('-');
	if (tmp[3] == '+')
		return ('+');
	if (tmp[2] == ' ')
		return (' ');
	return ('\0');
}

static t_tab	*disp_d2(t_tab *tab, intmax_t nbr, int width, int al)
{
	int			printed;
	char		prefix;
	int			ng;

	ng = (nbr < 0) ? 1 : 0;
	nbr *= (ng && nbr != (-9223372036854775807 - 1)) ? -1 : 1;
	prefix = get_prefix(tab, ng);
	printed = width;
	if (width <= tab->prec && tab->prec >= 0)
		printed = tab->prec;
	if (prefix)
		printed++;
	tab->len += (printed <= tab->width) ? tab->width : printed;
	if (!al)
		disp_sp(tab, ' ', tab->width - printed, 0);
	if (prefix)
		write(1, &prefix, 1);
	disp_sp(tab, '0', tab->prec - width, 0);
	if (nbr != (-9223372036854775807 - 1))
		ft_putnbrmax_fd(nbr, 1);
	else if ((tab->len += 18) > 0)
		write(1, "9223372036854775808", 19);
	if (al)
		disp_sp(tab, ' ', tab->width - printed, 0);
	return (tab);
}

t_tab			*disp_d(t_tab *tab)
{
	intmax_t	nbr;
	int			width;
	int			al;

	nbr = get_nbr(tab);
	if (nbr == 0 && tab->prec == 0)
	{
		if (tab->flag[3] == '+')
			disp_wchar('+', tab);
		if (tab->flag[2] == ' ')
			disp_wchar(' ', tab);
		disp_sp(tab, ' ', tab->width, 1);
		return (tab);
	}
	width = get_len(nbr);
	al = (tab->flag[0] == '-') ? 1 : 0;
	if (tab->flag[1] == '0' && tab->prec == -1 && !tab->flag[0])
	{
		tab->prec = tab->width;
		if (nbr < 0 || tab->flag[2] || tab->flag[3] || tab->flag[0])
			tab->prec--;
	}
	disp_d2(tab, nbr, width, al);
	return (tab);
}
