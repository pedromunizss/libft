/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 12:11:01 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/09/02 12:36:17 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	ptr_s1 = s1;
	ptr_s2 = s2;
	while (*ptr_s1 == *ptr_s2 && --n)
	{
		ptr_s1++;
		ptr_s2++;
	}
	return (*ptr_s1 - *ptr_s2);
}
