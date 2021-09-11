/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:35:47 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/09/11 11:15:33 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr_s1;
	char	*swap;
	char	*ptr_set;
	int		del;

	ptr_set = *set;
	swap = ft_strchr(ptr_s1, *ptr_set);
	while (*ptr_set != '\0')
	{
		while (ptr_s1 != NULL)
		{
			del = ptr_s1 - ptr_s1;
			ft_memmove(ptr_s1 + del, ptr_s1 + del + 1, ft_strlen(ptr_s1) - 1);
			swap = ft_strchr(ptr_s1, *ptr_set);
		}
		ptr_set++;
	}
}
