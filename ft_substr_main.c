/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr_main.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 09:52:55 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/15 17:12:38 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LEN 100

int	main(void)
{
	char *str = "01234";
	size_t size = 10;
	char *ret = ft_substr(str, 10, size);

	// if (!strncmp(ret, "", 1))
	// 	printf("failure!\n");
	printf("%s", ret);
	// char s1[LEN] = "HiHelloHowAreYou?\0";
	// char *s2 = ft_substr(s1, 3, 4);
	// printf("%s", s2);
	// free(s2);
	return (0);
}
