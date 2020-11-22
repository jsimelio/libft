/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa_main.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 10:15:23 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/22 23:45:22 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"
#include <stdio.h>
 
int	main(void)
{
	int n = 9;
	char *str;

	str = ft_itoa(n);
	printf("%s\n", str);
	free(str);
	return (0);
}
