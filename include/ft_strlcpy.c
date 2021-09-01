/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 17:00:43 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/08/31 21:48:41 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlcpy(char *dest, const char *src, size_t size)
{
	char	*ptr_src;
	char	*ptr_dest;

	ptr_dest = (char *)dest;
	ptr_src = (char *)src;
	while (*ptr_src != '\0' && size--)
	{
		*ptr_dest = *ptr_src;
		ptr_dest++;
		ptr_src++;
	}
	*ptr_dest = '\0';
	return (dest);
}
