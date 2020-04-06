#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

char			*ft_strjoin(char *s1, char *s2)
{
	char	*res;
	int i;

	res = NULL;
	i = 0;
	if (s1 && s2)
	{
		if (!(res = (char *)malloc(sizeof(char) *
						(ft_strlen(s1) + ft_strlen(s2) + 1))))
			return (0);
		while (*s1)
		{
			res[i] = *s1;
			i++;
			s1++;
		}
		while (*s2)
		{
			res[i] = *s2;
			i++;
			s2++;
		}
		res[i] = '\0';
	}
	return (res);
}

int 	ft_necklace(char *s1, char *s2)
{
	char *str;

	if ((ft_strlen(s1) == ft_strlen(s2)))
	{
		str = ft_strjoin(s1, s1);
		return (ft_strstr(str, s2));	
	}
	return (0);
}
