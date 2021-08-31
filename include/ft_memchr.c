/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 17:15:41 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/08/31 14:20:55 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t size)
{
	unsigned char	*ptr_s;

	ptr_s = (unsigned char *)s;
	while (size--)
	{
		if (*ptr_s == (unsigned char) c)
			return (ptr_s);
		ptr_s++;
	}
	return (NULL);
}
