/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disp.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 16:19:58 by rrhrara           #+#    #+#             */
/*   Updated: 2020/01/27 16:17:52 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	t_tab	*disp_pc(t_tab *tab)
{
	if (tab->flag[1] == '0' && tab->prec <= 0 && !tab->flag[0])
	{
		tab->prec = tab->width;
		tab->width = 0;
	}
	if (tab->flag[0] != '-')
		disp_sp(tab, ' ', tab->width - 1, 1);
	if (tab->flag[1] == '0')
		disp_sp(tab, '0', tab->prec - 1, 1);
	write(1, "%", 1);
	if (tab->flag[0] == '-')
		disp_sp(tab, ' ', tab->width - 1, 1);
	tab->len++;
	return (tab);
}

void			disp_sp(t_tab *tab, char c, int len, int nlen)
{
	char	*s;

	if (len > 0)
	{
		if (nlen)
			tab->len += len;
		if (!(s = ft_strnew(len)))
			exit(-1);
		ft_memset(s, c, len);
		write(1, s, len);
		free(s);
	}
}

t_tab			*disp(t_tab *tab)
{
	if (tab->s_treat[tab->i] == '%')
	{
		disp_pc(tab);
		return (tab);
	}
	if (tab->flag[1] == '0' && tab->prec <= 0 && !tab->flag[0])
	{
		tab->prec = tab->width;
		tab->width = 0;
	}
	if (tab->flag[0] != '-')
		disp_sp(tab, ' ', tab->width - 1, 1);
	if (tab->flag[1] == '0')
		disp_sp(tab, '0', tab->prec - 1, 1);
	write(1, &tab->s_copy[tab->i], 1);
	if (tab->flag[0] == '-')
		disp_sp(tab, ' ', tab->width - 1, 1);
	tab->len++;
	return (tab);
}
