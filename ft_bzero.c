/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 11:17:47 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/02 11:54:08 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_memset.c"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
