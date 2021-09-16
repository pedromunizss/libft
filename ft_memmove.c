/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 13:39:15 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/09/15 14:54:31 by pmuniz-s         ###   ########.fr       */
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
	if ((ptr_dest == NULL && ptr_src == NULL) || size == 0)
		return (ptr_dest);
	ft_memcpy(temp, ptr_src, size);
	i = 0;
	while (size--)
			*ptr_dest++ = temp[i++];
	return (dest);
}
