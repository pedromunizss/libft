/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 13:39:15 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/09/23 22:58:24 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t size)
{
	unsigned char	*ptr_src;
	unsigned char	*ptr_dest;

	ptr_src = (unsigned char *)src;
	ptr_dest = (unsigned char *)dest;
	if ((ptr_dest == NULL && ptr_src == NULL) || size == 0)
		return (ptr_dest);
	if (src < dest)
	{
		ptr_src += size;
		ptr_dest += size;
		while (size--)
			*--ptr_dest = *--ptr_src;
	}
	else
		ft_memcpy(ptr_dest, ptr_src, size);
	return (dest);
}
