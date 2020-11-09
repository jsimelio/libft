/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split_main.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 09:52:55 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/09 10:01:22 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LEN 100

int	main(void)
{
	char s[LEN] = "\0";
	char c = 'c';
	char **s3 = ft_split(s, c);
	printf("%s\n%s\n", s3[0], s3[1]);
	free(s3);
	return (0);
}
