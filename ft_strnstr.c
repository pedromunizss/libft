/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 16:52:48 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/09/14 17:53:42 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*ptr_big;
	char	*ptr_lit;
	size_t	len_lit;

	ptr_big = (char *)big;
	ptr_lit = (char *)little;
	len_lit = ft_strlen (ptr_lit);
	if (len_lit == 0)
		return (NULL);
	while (len_lit <= len--)
	{
		if (*ptr_big == *ptr_lit)
			if (ft_strncmp(ptr_big, ptr_lit, len_lit - 1) == 0)
				return (ptr_big);
		ptr_big++;
	}
	return (NULL);
}
