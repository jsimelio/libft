/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa_main.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 10:15:23 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/09 10:22:47 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

int	main(void)
{
	int n = -2000;
	char *str;

	str = ft_itoa(n);
	printf("%s\n", str);
	return (0);
}