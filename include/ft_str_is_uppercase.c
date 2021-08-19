int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	count_upper;

	i = 0;
	count_upper = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			count_upper++;
		i++;
	}
	if (count_upper == i)
		return (1);
	else
		return (0);
}
