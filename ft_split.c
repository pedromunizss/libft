/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:53:47 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/09/12 23:20:01 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_delim(const char *s, char c)
{
	char	*ptr;
	size_t	len;
	int		count_delim;

	ptr = (char *)s;
	len = ft_strlen(s);
	count_delim = 0;
	while (*ptr != '\0')
	{
		if (*ptr++ == c && (size_t)(ptr - s) < len)
			if (*ptr != c && *ptr != '\0')
				count_delim++;
	}
	return (count_delim);
}

static int	*set_delim(const char *s, char c, int n_delim)
{
	char	*ptr;
	int		*set;
	int		*ptr_set;
	int		stop;

	ptr = (char *)s;
	set = malloc(sizeof(int) * n_delim);
	ptr_set = set;
	stop = 0;
	while (*ptr != '\0')
	{
		if (*ptr++ == c)
		{
			if (*ptr != c && *ptr != '\0')
			{
				*ptr_set = ptr - s - 1;
				stop++;
				if (stop == n_delim)
					break ;
				ptr_set++;
			}
		}
	}
	return (set);
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	int		len_s;
	int		n_delim;
	int		*set;
	int		i;

	len_s = ft_strlen(s);
	n_delim = count_delim(s, c);
	set = set_delim(s, c, n_delim);
	split = malloc (n_delim * sizeof(char **));
	i = 0;
	while (ft_memchr(s, c, len_s))
		ft_bzero(ft_memchr(s, c, len_s), 1);
	while (n_delim--)
	{
		split[i] = (char *)s + set[i] + 1;
		i++;
	}
	return (split);
}
