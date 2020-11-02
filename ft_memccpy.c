/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 11:59:32 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/02 18:09:48 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src,
		int c, size_t n)
{
	unsigned char *dst2;
	unsigned char *src2;

	src2 = (unsigned char*)src;
	dst2 = (unsigned char*)dst;
	while (n)
	{
		if (*src2 != (unsigned char)c)
		{
			dst2 = src2;
			src2++;
			dst2++;
			n--;
		}
		else
			return (dst2) + 1;
	}
	return ((void*)(0));
}
