/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 14:29:09 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/07 20:04:48 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *s2;

	if (start + len > (unsigned int)ft_strlen(s))
		return ((void*)(0));
	if (!(s2 = malloc(len * sizeof(char))))
		return ((void*)(0));
	ft_memcpy(s2, (s + start), len);
	return (s2);
}
