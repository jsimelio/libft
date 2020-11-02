/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat_main.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 09:52:55 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/02 19:41:55 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LEN 100

int	main(void)
{
	char src[LEN] = "HiHelloHowAreYou?\0";
	char dst[LEN] = "FooBar\0";
	size_t dstsize = 0;
	printf("%zu\n", ft_strlcat(dst, src, dstsize));
	printf("%s\n", dst);
	return (0);
}
