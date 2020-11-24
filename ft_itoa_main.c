/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa_main.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 10:15:23 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/24 17:21:13 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"
#include <stdio.h>
 
int	main(void)
{
	int n = 10000002;
	char *str;

	str = ft_itoa(n);
	printf("%s\n", str);
	free(str);
	return (0);
}
