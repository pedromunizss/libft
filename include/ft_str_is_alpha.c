int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	count_alpha;

	i = 0;
	count_alpha = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
			count_alpha++;
		i++;
	}
	if (count_alpha == i)
		return (1);
	else
		return (0);
}
