int	ft_str_is_numeric(char	*str);

int	ft_str_is_numeric(char	*str)
{
	int	i;
	int	count_num;

	i = 0;
	count_num = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			count_num++;
		i++;
	}
	if (count_num == i)
		return (1);
	else
		return (0);
}
