/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 17:01:52 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/08/25 17:01:58 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memset (void    *b, int c, size_t   len)
{
    unsigned char	*ptr;
    unsigned char	value;
    unsigned int	i;
    
    ptr = b;
    value = (unsigned char)c;
    i=0;
    while(i < len)
    {
        ptr[i] = value;
        i++;
    }
    return (ptr);
}