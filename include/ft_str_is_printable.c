int	ft_str_is_printable(char	*str);

int	ft_str_is_printable(char	*str)
{
	int	i;
	int	count_printable;

	i = 0;
	count_printable = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
			count_printable++;
		i++;
	}
	if (count_printable == i)
		return (1);
	else
		return (0);
}
