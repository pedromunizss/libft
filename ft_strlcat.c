/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 22:06:02 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/09/14 16:04:21 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{	
	char	*ptr_src;
	char	*ptr_dest;
	size_t	len_src;
	size_t	len_dest;
	size_t	len_cat;

	ptr_src = (char *)src;
	ptr_dest = (char *)dest;
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	len_cat = size - len_dest;
	ptr_dest += len_dest;
	if (size < len_dest)
		return (size + len_src);
	while (*ptr_src != '\0' && --len_cat)
		*ptr_dest++ = *ptr_src++;
	*ptr_dest++ = '\0';
	return (len_src + len_dest);
}
