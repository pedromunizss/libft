/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:01:11 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/09/10 15:32:23 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buff;

	if(s == NULL)
		return (NULL);
	buff = (char *) malloc(len + 1);
	if (buff == NULL)
		return(NULL);
	ft_memcpy(buff, s + start, len);
	buff[len] = '\0';
	return (buff);
}
