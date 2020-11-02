/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 20:33:23 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/02 21:24:31 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char *needlestart;
	const char *haystackstart;

	needlestart = needle;
	haystackstart = haystack;
	while (haystack && len)
	{
		if (needle == '\0')
			return ((char*)haystack);
		if (*haystack != *needle)
		{
			haystackstart++;
			needle = needlestart;
		}
		needle++;
		haystack++;
		len--;
	}
	return ((void*)(0));
}
