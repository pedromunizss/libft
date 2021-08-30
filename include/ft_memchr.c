/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 17:15:41 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/08/30 17:26:49 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include 'libft.h'

void    *ft_memchr (const void  *s, int c, size_t   size)
{
    unsigned char   *ptr_s;
    unsigned char   *ptr_c;

    ptr_s = (unsigned char *)s;
    ptr_c = (unsigned char *)c;
    while(*ptr_s != ptr_c || size--)
        ptr_s++;
    if (*ptr_s == ptr_c)
        return (s);
    return (NULL);
}
