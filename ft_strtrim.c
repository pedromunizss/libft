/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:35:47 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/09/17 15:40:30 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_set_chr(const char c, const char *set)
{
	char	*ptr_set;

	ptr_set = (char *)set;
	while (*ptr_set != '\0')
	{
		if (*ptr_set == c)
			return (1);
		ptr_set++;
	}
	return (0);
}

static int	count_set_chr(const char *s, const char *set)
{
	int	i;

	i = 0;
	while (is_set_chr(s[i], set))
		i++;
	return (i);
}

static int	count_rev_set_chr(const char *s, const char *set)
{
	int	i;
	int	j;

	i = ft_strlen(s) - 1;
	j = 0;
	while (is_set_chr(s[i], set))
	{
		i--;
		j++;
	}
	return (j);
}

char	*ft_strtrim(const char *s, const char *set)
{
	int		size;
	int		size_rev;
	char	*buff;
	char	*ptr_buff;
	int		i;

	size = count_set_chr(s, set);
	size_rev = count_rev_set_chr(s, set);
	buff = (char *) malloc(sizeof (char) * ft_strlen(s) - size_rev - size + 1);
	ptr_buff = buff;
	i = size;
	while (i < (int)ft_strlen(s) - size_rev)
		*ptr_buff++ = s[i++];
	*ptr_buff = '\0';
	return (buff);
}
