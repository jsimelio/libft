/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bzero_main.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 09:52:55 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/02 11:49:34 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LEN 5

int	main(void)
{
	int return_value;
	int ft_return_value;
	unsigned char str[10];
	unsigned char ft_str[10];
	int i;
	char val;

	val = 'A';
	i = 0;
	while (i < LEN)
	{
		str[i] = val;
		ft_str[i] = val;
		i++;
	}
	printf("str: %s\nft_str: %s\n", str, ft_str);
	ft_bzero(ft_str, LEN);
	bzero(str, LEN);
	printf("bzero return value: %.5s\n", str);
	printf("ft_bzero return value: %.5s\n", ft_str);
	return (0);
}
