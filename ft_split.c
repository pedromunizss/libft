/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:53:47 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/09/24 17:27:33 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_delim(const char *s, char c)
{
	int	count_delim;
	int	i;

	i = 0;
	count_delim = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			if (i == 0 || (s[i - 1] == c))
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
	set = (int *) malloc (sizeof(int) * n_delim);
	while (i < n_delim)
	{
		if (s[j] != c)
		{
			if (j == 0 || s[j - 1] == c)
			{
				set[i] = j;
				i++;
			}
		}
		j++;
	}
	return (set);
}

static size_t	*size_tok(const char *s, char c, int *set_tok, int n_delim)
{
	char	*ptr;
	int		i;
	size_t	j;
	size_t	*size_split;

	size_split = (size_t *) malloc(n_delim * sizeof(size_t));
	if (!size_split)
		return (NULL);
	i = 0;
	while (i < n_delim)
	{
		j = 0;
		ptr = (char *)s + set_tok[i];
		while (*ptr++ != c)
		{
			j++;
			if (*ptr == '\0')
				break ;
		}
		ptr++;
		size_split[i] = j;
		i++;
	}
	return (size_split);
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	int		n;
	int		*sets;
	size_t	*sizes;

	if (!s)
		return (NULL);
	n = count_delim(s, c);
	sets = set_tok(s, c, n);
	split = (char **) ft_calloc(sizeof(char **), (n + 1));
	if (!split)
		return (NULL);
	sizes = size_tok(s, c, sets, n);
	while (n--)
		split[n] = ft_substr(s, sets[n], sizes[n]);
	free(sets);
	free(sizes);
	return (split);
}
