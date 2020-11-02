/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 11:59:32 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/02 15:35:51 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char 	*dst2;
	unsigned char 	*src2;
	int 			len_int;

	len_int = (int)len;
	dst2 = (unsigned char*)dst;
	src2 = (unsigned char *)src;
	len_int--;
	while (len_int >= 0)
	{
		dst2[len_int] = src2[len_int];
		len_int--;
	}
	return (dst);
}
