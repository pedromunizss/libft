/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 17:01:52 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/08/26 17:02:26 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memset (void    *b, int c, size_t   len)
{
    unsigned char	*ptr;
    unsigned char	value;
    
    ptr = b;
    value = (unsigned char)c;
    while(len--)
        *ptr++ = value;
    return (ptr);
}