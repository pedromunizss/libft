/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 13:39:15 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/09/08 12:10:02 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t size)
{
	unsigned char	*ptr_src;
	unsigned char	*ptr_dest;
	unsigned char	*temp;

	temp = 0;
	ptr_src = (unsigned char *)src;
	ptr_dest = (unsigned char *)dest;
	ft_memcpy(temp, ptr_src, size);
	while (size--)
		*ptr_dest++ = *temp++;
	return (dest);
}
