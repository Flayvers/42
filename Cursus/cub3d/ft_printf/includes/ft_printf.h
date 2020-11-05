/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 10:26:57 by rrhrara           #+#    #+#             */
/*   Updated: 2020/01/27 19:36:44 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <ctype.h>
# include "../libft/libft.h"

typedef struct	s_tab
{
	const char	*str;
	char		*s_copy;
	char		*s_treat;
	va_list		args;
	int			len;
	size_t		i;
	char		conv_flag;
	char		flag[5];
	char		arg[2];
	char		*arg_list;
	char		*conv_list;
	char		*flag_list;
	long int	prec;
	long int	width;
}				t_tab;

int				ft_printf(const char *str, ...);
int				parse(t_tab *tab);
int				treat(t_tab *tab);
t_tab			*init(t_tab *tab);
t_tab			*reinit(t_tab *tab);
t_tab			*parse_flag(t_tab *tab);
t_tab			*parse_width(t_tab *tab);
t_tab			*parse_prec(t_tab *tab);
t_tab			*parse_arg(t_tab *tab);
t_tab			*parse_conv(t_tab *tab);
t_tab			*displayer(t_tab *tab);
t_tab			*disp_c(t_tab *tab);
t_tab			*disp_s(t_tab *tab);
t_tab			*disp_p(t_tab *tab);
t_tab			*disp_d(t_tab *tab);
t_tab			*disp_i(t_tab *tab);
t_tab			*disp_u(t_tab *tab);
t_tab			*disp_x(t_tab *tab);
t_tab			*disp(t_tab *tab);
void			disp_wchar(wint_t c, t_tab *tab);
void			disp_sp(t_tab *tab, char c, int len, int nlen);

#endif
