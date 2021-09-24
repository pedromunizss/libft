/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:03:04 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/09/23 21:14:14 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr_s;

	ptr_s = (char *)s;
	ptr_s += ft_strlen(s);
	while (ptr_s != s && *ptr_s != (char)c)
		ptr_s--;
	if (ptr_s == s && *ptr_s != (char)c)
		return (NULL);
	return (ptr_s);
}
