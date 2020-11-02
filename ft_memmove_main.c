/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove_main.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 09:52:55 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/02 15:30:51 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LEN 10

int	main(void)
{
	unsigned char src[LEN] = "123456789\0";
	unsigned char dest[LEN] = "ABCDEFGHI\0";
	printf("%s", ft_memmove(dest, src, 6));
	return (0);
}
