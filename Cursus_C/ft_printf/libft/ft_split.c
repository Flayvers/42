/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 11:02:49 by rrhrara           #+#    #+#             */
/*   Updated: 2020/01/13 07:09:37 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_charset(char c, char charset)
{
	int		i;

	i = 0;
	if (c != charset)
		return (1);
	return (0);
}

static	int		ft_taillem(char *str, int i, char charset)
{
	int		j;

	j = 0;
	while (ft_charset(str[i], charset) && str[i] != '\0')
	{
		i++;
		j++;
	}
	return (j);
}

static	int		ft_nbr_mots(char *str, char charset)
{
	int		i;
	int		nbr_mots;

	i = 0;
	nbr_mots = 0;
	while (str[i] && charset)
	{
		while (ft_charset(str[i], charset) == 0)
			i++;
		if (str[i])
			nbr_mots++;
		while (ft_charset(str[i], charset) == 1 && str[i] != '\0')
			i++;
	}
	if (!(charset))
		return (1);
	return (nbr_mots);
}

char			**ft_split2(char *str, char charset, char **tab)
{
	int		is;
	int		i;
	int		j;

	is = 0;
	i = 0;
	while (i < ft_nbr_mots(str, charset) && str[0] != '\0')
	{
		j = 0;
		while (ft_charset(str[is], charset) == 0 && str[is])
			is++;
		if (!(tab[i] = malloc(sizeof(char) *
						ft_taillem(str, is, charset) + 1)))
			return (0);
		while (ft_charset(str[is], charset) == 1 && str[is])
			tab[i][j++] = str[is++];
		tab[i++][j] = '\0';
	}
	tab[i] = 0;
	return (tab);
}

char			**ft_split(char *str, char charset)
{
	char	**tab;

	if (str && charset)
	{
		if (!(tab = malloc(sizeof(char*) * (ft_nbr_mots(str, charset) + 1))))
		{
			free(tab);
			return (0);
		}
		return (ft_split2(str, charset, tab));
	}
	return (0);
}
