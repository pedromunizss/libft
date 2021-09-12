/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 19:09:15 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/09/12 19:31:46 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;

	nb = n;
	if (nb >= 0)
	{
		if (nb > 9)
			ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd('0' + nb % 10, fd);
	}
	else
	{
		ft_putchar_fd('-', fd);
		nb *= -1;
		ft_putnbr_fd(nb, fd);
	}
}
