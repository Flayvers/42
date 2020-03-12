/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disp_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 16:23:29 by rrhrara           #+#    #+#             */
/*   Updated: 2020/01/27 18:17:04 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void			put_0x(uintmax_t nbr, char c, char x)
{
	if (c == '#' && nbr)
	{
		if (x == 'x')
			write(1, "0x", 2);
		if (x == 'X')
			write(1, "0X", 2);
	}
}

static uintmax_t	get_nbr(t_tab *tab)
{
	uintmax_t	num;

	if (ft_strcmp(tab->arg, "hh") == 0)
		num = (unsigned char)(va_arg(tab->args, unsigned int));
	else if (ft_strcmp(tab->arg, "h") == 0)
		num = (unsigned short)(va_arg(tab->args, unsigned int));
	else if (ft_strcmp(tab->arg, "ll") == 0)
		num = (unsigned long long)(va_arg(tab->args, unsigned long long int));
	else if (ft_strcmp(tab->arg, "l") == 0)
		num = (unsigned long)(va_arg(tab->args, unsigned long int));
	else
		num = (unsigned int)(va_arg(tab->args, unsigned int));
	num = (uintmax_t)num;
	return (num);
}

static t_tab		*disp_x2(t_tab *tab, uintmax_t nbr, char *str, int al)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if ((i = ft_strlen(str)) && tab->flag[4] == '#' && nbr &&
			tab->flag[1] == '0' && tab->width)
		i += 2;
	else if ((i = ft_strlen(str)) && tab->flag[4] == '#' && nbr)
	{
		tab->width -= 2;
		tab->len += 2;
	}
	j = (i <= tab->prec && tab->prec > 0) ? tab->prec : i;
	tab->len += (j <= tab->width) ? tab->width : j;
	if (!al)
		disp_sp(tab, ' ', tab->width - j, 0);
	put_0x(nbr, tab->flag[4], tab->conv_flag);
	disp_sp(tab, '0', tab->prec - i, 0);
	ft_putstr_fd(str, 1);
	if (al)
		disp_sp(tab, ' ', tab->width - j, 0);
	return (tab);
}

t_tab				*disp_x(t_tab *tab)
{
	uintmax_t	nbr;
	char		c;
	int			al;
	char		*s;

	al = 0;
	nbr = get_nbr(tab);
	if (!nbr && tab->prec == 0)
	{
		disp_sp(tab, ' ', tab->width, 1);
		return (tab);
	}
	c = 'a';
	if (tab->conv_flag == 'X')
		c = 'A';
	if ((s = ft_itoa_base(nbr, 16, c)))
		if (tab->flag[0] == '-')
			al = 1;
	if (tab->flag[1] == '0' && tab->prec == -1 && !tab->flag[0])
		tab->prec = tab->width;
	disp_x2(tab, nbr, s, al);
	free(s);
	return (tab);
}
