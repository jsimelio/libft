/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi_main.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 15:44:05 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/09 16:07:44 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	printf("%s\n", ft_strmapi(str, *capitalizeOdd));
}
