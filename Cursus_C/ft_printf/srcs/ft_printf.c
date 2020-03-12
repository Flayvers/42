/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 18:17:57 by rrhrara           #+#    #+#             */
/*   Updated: 2020/01/27 19:49:05 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *str, ...)
{
	t_tab	*tab;

	if (!(tab = (t_tab*)malloc(sizeof(t_tab))))
		return (-1);
	tab->str = str;
	tab = init(tab);
	if (str)
	{
		va_start(tab->args, str);
		tab->len = parse(tab);
		va_end(tab->args);
	}
	free(tab);
	return (tab->len);
}

t_tab	*init(t_tab *tab)
{
	tab->len = 0;
	tab->i = 0;
	tab->conv_list = "cspdDiuUxX%";
	tab->flag_list = "-0 +#";
	tab->arg_list = "lh";
	tab->s_treat = (char*)tab->str;
	tab->s_copy = (char*)tab->str;
	return (tab);
}

int		parse(t_tab *tab)
{
	if (ft_strcmp(tab->s_copy, "%") == 0)
		return (0);
	while (tab->s_copy[tab->i] != '\0')
	{
		if (tab->s_copy[tab->i] == '%')
		{
			reinit(tab);
			treat(tab);
		}
		else
		{
			write(1, &tab->s_copy[tab->i], 1);
			tab->len++;
		}
		tab->i++;
	}
	return (tab->len);
}

t_tab	*reinit(t_tab *tab)
{
	tab->conv_flag = -1;
	tab->flag[0] = '\0';
	tab->flag[1] = '\0';
	tab->flag[2] = '\0';
	tab->flag[3] = '\0';
	tab->flag[4] = '\0';
	tab->arg[0] = '\0';
	tab->arg[1] = '\0';
	tab->prec = -1;
	tab->width = 0;
	return (tab);
}

int		treat(t_tab *tab)
{
	tab->i++;
	parse_flag(tab);
	parse_width(tab);
	parse_prec(tab);
	parse_arg(tab);
	parse_conv(tab);
	displayer(tab);
	return (tab->len);
}
