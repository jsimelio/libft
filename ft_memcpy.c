/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 11:59:32 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/02 19:39:52 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst2;
	const char	*src2;
	int			len;

	len = (int)n;
	// size_t			i;

	// i = 0;

	// int				len;

	// len = (int)n;
	dst2 = dst;
	src2 = src;
	while (len)
	{
		*dst2 = *src2;
		dst2++;
		src2++;
		len--;
	}
	return (dst);
}
