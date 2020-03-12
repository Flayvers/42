/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disp_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 16:22:06 by rrhrara           #+#    #+#             */
/*   Updated: 2020/01/25 14:06:52 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_tab	*disp_s(t_tab *tab)
{
	char	*s;
	size_t	len;

	s = va_arg(tab->args, char*);
	if (tab->prec > -1 && s)
		s = ft_strndup(s, tab->prec);
	else if (tab->prec == -1 && s)
		s = ft_strdup(s);
	else if (tab->prec > -1 && !s)
		s = ft_strndup("(null)", tab->prec);
	else if (tab->prec == -1 && !s)
		s = ft_strdup("(null)");
	len = ft_strlen(s);
	tab->len += len;
	if (tab->flag[1] == '0' && tab->flag[0] != '-')
		disp_sp(tab, '0', tab->width - len, 1);
	else if (tab->flag[0] != '-')
		disp_sp(tab, ' ', tab->width - len, 1);
	ft_putstr_fd(s, 1);
	if (tab->flag[0] == '-')
		disp_sp(tab, ' ', tab->width - len, 1);
	free(s);
	return (tab);
}
