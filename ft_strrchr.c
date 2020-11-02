/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 19:44:25 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/02 20:32:26 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strlen.c"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i > -1)
	{
		if (s[i] == c)
			return ((char*)(&(s[i])));
		i--;
	}
	return ((void*)(0));
}
