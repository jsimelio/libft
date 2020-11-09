/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 20:33:23 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/03 12:58:04 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t n;

	n = ft_strlen(needle);
	while (*haystack && len)
	{
		if (!ft_memcmp((char*)needle, haystack, n))
			return ((char*)haystack);
		haystack++;
		len--;
	}
	return ((void*)(0));
}