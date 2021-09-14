/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 13:39:15 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/09/14 15:20:09 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t size)
{
	unsigned char	*ptr_src;
	unsigned char	*ptr_dest;
	unsigned char	temp[size];
	int i;

	ptr_src = (unsigned char *)src;
	ptr_dest = (unsigned char *)dest;
	ft_memcpy(temp, ptr_src, size);
	i = 0;
	while (size--)
			*ptr_dest++ = temp[i++];
	return (dest);
}
