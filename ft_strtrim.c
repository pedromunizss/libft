/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:35:47 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/09/16 21:32:41 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int is_set_chr(const char c, const char *set)
{
	char	*ptr;

	ptr = (char *)set;
	while (*ptr != '\0')
	{
		if (c == *ptr)
			return (1);
		ptr++;
	}
	return (0);
}

int	count_set_chr(const char *s, const char *set)
{
	char	*ptr_s;
	int		i;

	ptr_s = (char *)s;
	i = 0;
	while (*ptr_s != '\0')
	{
		if (is_set_chr(*ptr_s, set))
			i++;
		ptr_s++;
	}
	return (i);
}

char	*ft_strtrim(const char *s, const char *set)
{
	char	*ptr_s;
	int		count_sets;
	char	*buff;
	char	*ptr_buff;

	ptr_s = (char *)s;
	count_sets = count_set_chr(ptr_s, set);
	buff = (char *) malloc((ft_strlen(s)- count_sets + 1) * sizeof(char));
	ptr_buff = buff;
	while (*ptr_s != '\0')
	{
		if (!is_set_chr(*ptr_s, set))
			ft_strlcpy(ptr_buff++, ptr_s, 1);
		ptr_s++;
	}
	*ptr_buff = '\0';
	return (buff);
}
