/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:53:47 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/09/17 21:19:06 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int    count_delim(const char *s, char c)
{
	int	count_delim;
	int	i;

	i = 0;
	count_delim = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			if (i == 0 || (s[i-1] == c))
				count_delim++;
		i++;
	}
	return (count_delim);
}



static int	*set_tok(const char *s, char c, int n_delim)
{
    int	j;
    int	i;
    int	*set;

	j = 0;
	i = 0;
	set = (int*) malloc(sizeof(int) * n_delim);
	while (i < n_delim )
	{
		if (s[j] != c)
		{
			if (j == 0 || s[j-1] == c)
			{
				set[i] = j;
				i++;
			}
		}
		j++;
	}
	return (set);
}

static size_t  *size_tok(const char *s, char c, int *set_tok, int n_delim)
{
	char	*ptr;
	int 	i;
	size_t	j;
	size_t *size_split;

	size_split = (size_t *) malloc(n_delim * sizeof(size_t));
	i = 0;
	while (i < n_delim)
	{
		j = 0;
		ptr = (char*)s + set_tok[i];
		while (*ptr++ != c)
			j++;
		size_split[i] = j;
		i++;
	}
	return (size_split);
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	int		n_delim;
	int		*set;
	int		i;
	size_t	*size;

	if (!s)
		return (NULL);
	n_delim = count_delim(s, c);
	set = set_tok(s, c, n_delim);
	split = malloc ((n_delim + 1) * sizeof(char **));
	size = size_tok(s, c, set, n_delim);
	i = 0;
	split[n_delim] = NULL;
	while (i < n_delim)
	{
		split[i] = ft_substr(s, set[i], size[i]);
		i++;
	}
	return (split);
}
