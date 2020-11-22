/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi_main.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 15:44:05 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/23 00:13:16 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	capitalizeOdd(unsigned int index, char c)
{
	if (index % 2 == 0)
	{
		return (c);
	}
	else
	{
		return (ft_toupper(c));
	}
}

int		main(void)
{
	char	*str = "soem string.";
	char *str2 = ft_strmapi(str, *capitalizeOdd);
	printf("%s\n", str2);
	free(str2);
	return (0);
}
