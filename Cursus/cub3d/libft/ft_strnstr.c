/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 09:14:46 by rrhrara           #+#    #+#             */
/*   Updated: 2019/11/04 13:10:47 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(char *str, char *to_find, int n)
{
	int i;
	int j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0' && i < n)
	{
		j = 0;
		while (to_find[j] == str[i + j] && (i + j) < n)
		{
			if (to_find[j + 1] == '\0' && (i + j) < n)
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
