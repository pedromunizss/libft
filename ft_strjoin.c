/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:17:33 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/09/10 14:27:57 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buff;
	char	*ptr_buff;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	buff = (char *) malloc(len_s1 + len_s2 + 1);
	if (!buff)
		return (NULL);
	ptr_buff = buff;
	ptr_buff = ft_memcpy(ptr_buff, s1, len_s1);
	ptr_buff += len_s1;
	ptr_buff = ft_memcpy(ptr_buff , s2, len_s2 + 1);
	return (buff);
}
