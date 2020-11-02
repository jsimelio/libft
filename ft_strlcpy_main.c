/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy_main.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 09:52:55 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/02 17:08:00 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LEN 100

int	main(void)
{
	char src[LEN] = "HiHelloHowAreYou?\0";
	char dst[LEN] = "\0";
	size_t dstsize = 10;
	printf("%zu\n", ft_strlcpy(dst, src, dstsize));
	printf("%s\n", dst);
	return (0);
}
