/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 10:12:00 by pmuniz-s          #+#    #+#             */
/*   Updated: 2021/08/31 21:50:21 by pmuniz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c);
int	ft_isdigit(int	c);
int ft_isalnum(int  c);
int ft_isascii(int  c);
int	ft_isprint(int	c);
size_t	ft_strlen(const char    *s);
void    *ft_memset (void    *b, int c, size_t   size);
void    ft_bzero(void   *s, size_t  size);
void    *ft_memcpy(void    *dest, const void   *src, size_t    size);
void    *ft_memmove(void *dest, void *src, size_t size);
char	*ft_strlcpy(char *dest, const char *src, size_t size);
void	*ft_memchr(const void *s, int c, size_t size);