/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy_main.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 09:52:55 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/15 21:12:58 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LEN 100

int	main(void)
{
	char src[] = "test basic !";
	char buff1[] = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff2[] = "the cake is a lie !\0I'm hidden lol\r\n";

	memccpy(buff1, src, ' ', strlen(src));
	ft_memccpy(buff2, src, ' ', strlen(src));
	// if (memcmp(buff1, buff2, strlen(buff2)))
	printf("%s\n", buff1);
	printf("%s\n", buff2);
}
