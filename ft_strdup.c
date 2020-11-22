/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 13:39:53 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/22 21:06:23 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	void	*memory;
	int		strlen;

	strlen = ft_strlen(s1) + 1;
	if (!(memory = malloc(strlen * sizeof(char))))
		return (NULL);
	ft_memcpy(memory, s1, strlen);
	return (memory);
}
