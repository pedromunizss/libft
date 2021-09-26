/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 18:52:24 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/09/26 13:36:53 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*tmp;
	size_t	len_s;

	len_s = ft_strlen (s);
	tmp = (char *) malloc(len_s + 1);
	if (!tmp)
		return (NULL);
	else
	{
		ft_memcpy (tmp, s, ft_strlen (s));
		tmp[len_s] = '\0';
	}
	return (tmp);
}
