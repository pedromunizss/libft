/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:01:11 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/10/01 16:53:04 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buff;

	if (!s)
		return (NULL);
	if (start <= ft_strlen(s))
	{
		if (len > ft_strlen(s + start))
		{
			buff = (char *) malloc(ft_strlen(s + start) + 1);
			len = ft_strlen(s + start);
		}
		else
			buff = (char *) malloc(len + 1);
		if (!buff)
			return (NULL);
		ft_strlcpy(buff, s + start, len + 1);
		return (buff);
	}
	else
		buff = (char *) ft_calloc(1, sizeof(char));
	return (buff);
}
