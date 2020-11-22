/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc_main.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 13:39:53 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/22 22:38:09 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int size = 1430;

	void *d1 = ft_calloc(size, 0);
	// void *d2 = calloc(size, 0);
	// if (memcmp(d1, d2, size * sizeof(int)) != 0)
	// 	printf("Test failed!\n");
	// else
	// 	printf("Test succeeded!\n");
	printf("%s\n", d1);
	// printf("%s\n", d2);
	free(d1);
	// free(d2);
}
