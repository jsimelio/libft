/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/06 10:34:37 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/06 10:41:14 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int sign;
	int num;

	num = 0;
	while (*str == ' ')
		str++;
	sign = 0;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign--;
		str++;
	}
	while (ft_isdigit(*str) != 0)
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	if (sign < 0)
		num = -num;
	return (num);
}
