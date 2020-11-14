/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/06 10:34:37 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/14 22:22:11 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_iswhite(char c)
{
	if (c == '\t' || c == '\v' || c == '\f'
		|| c == '\n' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int			sign;
	long int	num;

	num = 0;
	while (ft_iswhite(*str))
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
		if (num >= 2147483647)
		{
			if (sign < 0)
				return (0);
			return (-1);
		}
		num = num * 10 + (*str - '0');
		str++;
	}
	if (sign < 0)
		num = -num;
	return ((int)num);
}
