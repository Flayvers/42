int	ft_isdigit(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9' || str[i] == '\n')
			i++;
		else
			return (0);
	}
	return (1);
}