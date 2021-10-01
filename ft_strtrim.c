/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:35:47 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/09/23 11:28:02 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(const char c, const char *set)
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

static int	first_set_chr(const char *s, const char *set)
{
	int	i;

	i = 0;
	while (is_set(s[i], set))
		i++;
	return (i);
}

static int	last_set_chr(const char *s, const char *set)
{
	int	i;
	int	j;

	i = ft_strlen(s) - 1;
	j = 0;
	while (is_set(s[i], set))
	{
		i--;
		j++;
	}
	return (j);
}

char	*ft_strtrim(const char *s, const char *set)
{
	size_t	size;
	size_t	size_rev;
	size_t	size_buff;
	char	*buff;

	if (!s)
		return (NULL);
	size = first_set_chr(s, set);
	size_rev = last_set_chr(s, set);
	if (size == ft_strlen(s))
		buff = (char *) ft_calloc(1, sizeof(char));
	else
	{
		size_buff = ft_strlen(s) - size_rev - size + 1;
		buff = (char *) malloc(sizeof (char) * size_buff);
		if (size_buff == 0)
		{
			ft_strlcpy(buff, s + size, size_buff - 1);
			ft_bzero(buff + size_buff - 1, 1);
		}
		else
			ft_strlcpy(buff, s + size, size_buff);
	}
	return (buff);
}
