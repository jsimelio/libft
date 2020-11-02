/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy_main.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 09:52:55 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/02 14:34:00 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LEN 10

int	main(void)
{
	unsigned char src[LEN] = "HellKoooo\0";
	unsigned char dest[LEN];
	char c;

	c = 'H';
	printf("%s", ft_memccpy(dest, src, c, 10));
	return (0);
}
