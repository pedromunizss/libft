/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:59:17 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/09/15 14:58:46 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

static int ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_isalpha(int c)
{
	if (ft_islower(c) || ft_isupper(c))
		return (1);
	return (0);
}
