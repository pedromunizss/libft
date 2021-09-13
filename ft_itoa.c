/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:19:40 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/09/13 15:54:49 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
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
	int		i;

	i = count_digits(n);
	if (n <= 0)
	{
		str = malloc(++i * sizeof(char));
		if (n < 0)
			str[0] = '-';
		n *= -1;
	}
	else
		str = malloc(i * sizeof(char));
	str[--i] = '\0';
	while (i)
	{
		str[--i] = '0' + n % 10;
		n /= 10;
	}
	return (str);
}
