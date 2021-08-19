char	ft_upcase(char	c);
char	ft_lowcase(char c);
char	ft_is_alphanum(char c);
char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] != '\0')
		str[i] = ft_upcase(str[i]);
	i++;
	while (str[i] != '\0')
	{
		if (!ft_is_alphanum(str[i - 1]) && ft_is_alphanum(str[i]))
			str[i] = ft_upcase(str[i]);
		else
			str[i] = ft_lowcase(str[i]);
		i++;
	}
	return (str);
}

char	ft_upcase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	ft_lowcase(char	c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char	ft_is_alphanum(char	c)
{
	if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
		if (c < '0' || c > '9')
			return (0);
	return (1);
}
