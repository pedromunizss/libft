/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 17:00:43 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/09/01 17:26:28 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	*ft_strlcpy(char *dest, const char *src, size_t size)
{
	char	*ptr_src;
	char	*ptr_dest;
	size_t	*len_src;

	len_src = ft_strlen(src);
	ptr_dest = (char *)dest;
	ptr_src = (char *)src;
	while (*ptr_src != '\0' && size--)
		*ptr_dest++ = *ptr_src++;
	*ptr_dest = '\0';
	return (len_src);
}
