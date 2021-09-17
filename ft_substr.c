/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:01:11 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/09/16 11:43:22 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buff;
	
	if (!s)
		return (NULL);
	if (len <= ft_strlen(s + start))
		buff = (char *) malloc(len + 1);
	else 
		buff = (char *) malloc(ft_strlen(s + start));
	if (buff == NULL)
		return (NULL);
	ft_memcpy(buff, s + start, len);
	buff[len] = '\0';
	return (buff);
}
