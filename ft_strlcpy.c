/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 16:46:13 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/03 17:38:42 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src,
		size_t dstsize)
{
	unsigned char	*dst2;
	unsigned char	*src2;
	int				i;

	dst2 = (unsigned char*)dst;
	src2 = (unsigned char*)src;
	i = 0;
	while (i < (int)dstsize - 1)
	{
		dst2[i] = src2[i];
		i++;
	}
	if (i < (int)dstsize)
	{
		dst2[i] = '\0';
	}
	return (size_t)(i);
}
