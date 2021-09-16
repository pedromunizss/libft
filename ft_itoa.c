/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:19:40 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/09/15 11:26:00 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digits(int n)
{
	int	i;

	i = 1;
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
	size_t	i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = count_digits(n);
	if (n <= 0)
	{
		str = malloc(++i * sizeof(char));
		if (n < 0)
			str[0] = '-';
		if (n == 0)
			str[0] = '0';
		n *= -1;
	}
	else
		str = malloc(i * sizeof(char));
	str[--i] = '\0';
	while (n)
	{
		str[--i] = '0' + n % 10;
		n /= 10;
	}
	return (str);
}
