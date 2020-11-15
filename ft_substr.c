/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 14:29:09 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/15 17:14:31 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *s2;

	if (start + (unsigned int)len > (unsigned int)ft_strlen(s))
		return (NULL);
	if (!(s2 = malloc((len + 1) * sizeof(char))))
		return (NULL);
	ft_memcpy(s2, (s + start), len);
	s2[len] = 0;
	return (s2);
}
