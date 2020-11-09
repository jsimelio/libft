/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr_main.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 09:52:55 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/03 14:52:38 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LEN 100

int	main(void)
{
	char s1[LEN] = "HiHelloHowAreYou?\0";
	char *s2 = ft_substr(s1, 3, 4);
	printf("%s", s2);
	free(s2);
	return (0);
}
