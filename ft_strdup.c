/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 18:52:24 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/09/08 19:17:25 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*tmp;

	tmp = (char *) malloc(ft_strlen (s) + 1);
	if (tmp != NULL)
		ft_memcpy (tmp, s, ft_strlen (s));
	return (tmp);
}
