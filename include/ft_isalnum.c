
int ft_isalnum(int  c)
{
    if (ft_islower(c) || ft_isupper(c) || ft_digit(c))
        return (1);
    return (0);
}