/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 20:51:13 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/08/26 16:59:05 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memcpy(void    *dest, const void   *src, size_t    n)
{
    unsigned char   *ptr_dest;
    unsigned char   *ptr_src;

    ptr_dest = dest;
    ptr_src = (unsigned char *)src;
    if ((ptr_dest == NULL && ptr_src == NULL) || n == 0)
		return (ptr_dest);
    while (n--)
        *ptr_dest++ = *ptr_src++;
    return (ptr_dest);
}
