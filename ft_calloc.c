/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 13:39:53 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/15 16:36:15 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *memory;

	if (!(memory = malloc(size * count)))
		return ((void*)(0));
	ft_bzero(memory, count * size);
	return (memory);
}

