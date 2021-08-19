int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	count_lower;

	i = 0;
	count_lower = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			count_lower++;
		i++;
	}
	if (count_lower == i)
		return (1);
	else
		return (0);
}
