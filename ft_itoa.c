/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:19:40 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/10/01 16:04:57 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digits(int n)
{
	int	i;

	if (n == 0)
		i = 1;
	else
		i = 0;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		sign;
	size_t	i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = count_digits(n);
	sign = 0;
	if (n < 0)
	{
		sign = 1;
		n *= -1;
	}
	str = (char *) ft_calloc(sizeof(char), i + sign + 1);
	if (!str)
		return (NULL);
	while (i)
	{
		str[--i + sign] = '0' + n % 10;
		n /= 10;
		if (n == 0 && sign)
			str[i] = '-';
	}
	return (str);
}
