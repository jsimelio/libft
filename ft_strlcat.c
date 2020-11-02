/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 16:46:13 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/02 19:43:10 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_memcpy.c"
#include "ft_strlen.c"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int src_len;
	int dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (!dstsize)
		return (0);
	if (dst_len > dstsize)
		return (src_len + dstsize);
	if (src_len < dstsize - dst_len)
	{
		ft_memcpy(dst + dst_len, src, src_len + 1);
	}
	else
	{
		ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
		dst[dst_len + dstsize - 1] = '\0';
	}
	return (dst_len + src_len);
}
