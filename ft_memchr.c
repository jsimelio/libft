/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 11:59:32 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/02 15:46:15 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *s2;

	s2 = (unsigned char*)s;
	while (n)
	{
		if (*s2 == (unsigned char)c)
			return ((void*)s2);
		else
		{
			s2++;
			n--;
		}
	}
	return ((void*)(0));
}
