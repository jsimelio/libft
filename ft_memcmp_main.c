/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp_main.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 09:52:55 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/02 16:33:05 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LEN 10

int	main(void)
{
	unsigned char s1[LEN] = "\0";
	unsigned char s2[LEN] = "\0";
	int size = 3;
	
	printf("%d", ft_memcmp(s1, s2, size));
	return (0);
}
