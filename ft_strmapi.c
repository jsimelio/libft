/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 15:55:44 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/16 17:04:51 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s2;

	if (!s)
		return (NULL);
	i = 0;
	if (!(s2 = malloc((ft_strlen(s) + 1) * sizeof(char))))
		return ((void*)(0));
	while (*s)
	{
		s2[i] = f(i, *s);
		i++;
		s++;
	}
	s2[i] = 0;
	return (s2);
}
