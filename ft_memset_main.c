/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset_main.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 09:52:55 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/22 20:06:57 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LEN 10

int	main(void)
{
	unsigned char str[10];
	unsigned char ft_str[10];
	int i;
	char val;

	val = 'A';
	i = 0;
	while (i < LEN)
	{
		str[i] = 'b';
		ft_str[i] = 'b';
		i++;
	}
	printf("str: %s\nft_str: %s\n", str, ft_str);
	printf("memset return value: %.10s\n", memset(str, val, LEN));
	printf("ft_memset return value %.10s\n", ft_memset(ft_str, val, LEN));
	return (0);
}
