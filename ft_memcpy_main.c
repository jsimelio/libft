/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy_main.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 09:52:55 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/02 19:40:06 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LEN 100

int	main(void)
{
	int return_value;
	int ft_return_value;
	unsigned char src[LEN] = "TestAgain\0";
	unsigned char dest[LEN] = "\0";
	printf("%s", ft_memcpy(dest, src, 15));
	return (0);
}
