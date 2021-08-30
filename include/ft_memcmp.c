/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 10:18:02 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/08/30 15:52:03 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include 'libft.h'

int ft_memcmp (const void   *s1, const void *s2, size_t size)
{
    unsigned char   *ptr_s1;
    unsigned char   *ptr_s2;
    int diff;
    ptr_s1 = (unsigned char *)s1;
    ptr_s2 = (unsigned char *)s2;
    while (*ptr_s1 == *ptr_s2 && size--)
    {
    	++ptr_s1;
    	++ptr_s2;
    }
    diff = (int)(*ptr_s1 - *ptr_s2);
    if (diff > 0)
        return(1);
    else if (diff < 0)
        return(-1);
    else
        return(0);
}
