/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:35:47 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/09/12 12:36:24 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr_s1;
	char	*swap;
	char	*ptr_set;
	int		del;

	if (s1 == NULL || set == NULL)
		return (NULL);
	ptr_set = (char *)set;
	ptr_s1 = (char *)s1;
	while (*ptr_set != '\0')
	{
		swap = ft_strchr(ptr_s1, *ptr_set);
		while (swap != NULL)
		{
			del = swap - ptr_s1;
			ft_memmove(ptr_s1 + del, ptr_s1 + del + 1, ft_strlen(ptr_s1) - 1);
			swap = ft_strchr(ptr_s1, *ptr_set);
		}
		ptr_set++;
	}
	return (ptr_s1);
}
