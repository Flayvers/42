/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 16:57:40 by rrhrara           #+#    #+#             */
/*   Updated: 2020/02/18 16:48:15 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_tab	*parse_flag(t_tab *tab)
{
	size_t	i;

	i = 0;
	while (tab->flag_list[i] != '\0')
	{
		while (tab->flag_list[i] == tab->s_treat[tab->i])
		{
			while (tab->s_treat[tab->i] == '-' && tab->i++)
				tab->flag[0] = '-';
			while (tab->s_treat[tab->i] == '0' && tab->i++)
				tab->flag[1] = '0';
			while (tab->s_treat[tab->i] == ' ' && tab->i++)
				tab->flag[2] = ' ';
			while (tab->s_treat[tab->i] == '+' && tab->i++)
				tab->flag[3] = '+';
			while (tab->s_treat[tab->i] == '#' && tab->i++)
				tab->flag[4] = '#';
			i = 0;
		}
		i++;
	}
	return (tab);
}

t_tab	*parse_width(t_tab *tab)
{
	while (tab->s_treat[tab->i] >= '0' && tab->s_treat[tab->i] <= '9')
	{
		tab->width *= 10;
		tab->width += tab->s_treat[tab->i] - 48;
		tab->i++;
	}
	if (tab->s_treat[tab->i] == '*')
	{
		tab->i++;
		tab->width = (int)(va_arg(tab->args, int));
		if (tab->width < 0)
		{
			tab->flag[0] = '-';
			tab->width *= -1;
		}
	}
	return (tab);
}

t_tab	*parse_prec(t_tab *tab)
{
	while (tab->s_treat[tab->i] == '.')
	{
		tab->i++;
		tab->prec = 0;
	}
	if (tab->s_treat[tab->i] == '*')
	{
		tab->i++;
		tab->prec = (int)(va_arg(tab->args, int));
		if (tab->prec < 0)
			tab->prec = -1;
	}
	while (tab->s_treat[tab->i] >= '0' && tab->s_treat[tab->i] <= '9')
	{
		tab->prec *= 10;
		tab->prec += tab->s_treat[tab->i] - 48;
		tab->i++;
	}
	return (tab);
}

t_tab	*parse_arg(t_tab *tab)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (tab->arg_list[i] != '\0')
	{
		while (tab->arg_list[i] == tab->s_treat[tab->i])
		{
			tab->arg[j] = tab->s_treat[tab->i];
			tab->arg[j + 1] = '\0';
			tab->i++;
			j++;
		}
		i++;
	}
	return (tab);
}

t_tab	*parse_conv(t_tab *tab)
{
	size_t i;

	i = 0;
	while (tab->conv_list[i] != '\0')
	{
		if (tab->conv_list[i] == tab->s_treat[tab->i])
			tab->conv_flag = tab->conv_list[i];
		i++;
	}
	return (tab);
}
