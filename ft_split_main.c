/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split_main.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 09:52:55 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/15 22:01:05 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LEN 100

int	main(void)
{
	char *string = "      split       this for   me  !       ";
	char c = ' ';
	char **s3 = ft_split(string, c);
	printf("%s\n%s\n", s3[0], s3[1]);
	free(s3);
	return (0);
}
