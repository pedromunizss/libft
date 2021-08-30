/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 17:23:13 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/08/30 10:11:17 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void   *s, size_t  size)
{
    unsigned char    *ptr;
    size_t  i;

    ptr = s;
    if(size > 0)
        ft_memset(ptr, 0, size);
}