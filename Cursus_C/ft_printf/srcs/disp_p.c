/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disp_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 16:21:25 by rrhrara           #+#    #+#             */
/*   Updated: 2020/01/25 14:07:00 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static uintmax_t		get_num(t_tab *tab)
{
	uintmax_t	num;

	num = (unsigned long)(va_arg(tab->args, unsigned long int));
	num = (uintmax_t)num;
	return (num);
}

static t_tab			*print_sp(t_tab *tab, char *s, int al)
{
	int		printed;
	int		p_width;

	printed = (ft_strlen(s) + 2);
	p_width = printed;
	if (printed <= tab->width)
		tab->len += tab->width;
	else
		tab->len += printed;
	if (!al)
		disp_sp(tab, ' ', tab->width - printed, 0);
	write(1, "0x", 2);
	disp_sp(tab, '0', (tab->prec - p_width) + 2, 1);
	ft_putstr_fd(s, 1);
	if (al)
		disp_sp(tab, ' ', tab->width - printed, 0);
	free(s);
	return (tab);
}

t_tab					*disp_p(t_tab *tab)
{
	uintmax_t	nbr;
	char		*s;
	int			al;

	al = 0;
	nbr = get_num(tab);
	if (!(s = ft_itoa_base(nbr, 16, 'a')))
		exit(-1);
	if (tab->flag[0] == '-')
		al = 1;
	if (tab->prec == 0 && nbr == 0)
		*s = '\0';
	if (tab->flag[1] == '0' && tab->prec == -1 && tab->flag[0] != '-')
	{
		tab->prec = tab->width - 2;
		tab->width = 0;
	}
	print_sp(tab, s, al);
	return (tab);
}
