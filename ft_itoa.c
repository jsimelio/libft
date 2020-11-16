/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 10:04:17 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/16 17:50:20 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*copystring(char *tmp)
{
	int		i;
	char	*str;

	i = 0;
	if (!(str = malloc(sizeof(char) * (ft_strlen(tmp) + 1))))
		return (NULL);
	while (tmp[i])
	{
		str[i] = tmp[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char		*ft_itoa(int n)
{
	char	*tmp;
	char	tmp2[INT_MAX_32BIT + 2];

	tmp = tmp2 + INT_MAX_32BIT + 1;
	if (n == 0)
		tmp = "0";
	else if (n >= 0)
		while (n != 0)
		{
			tmp--;
			*tmp = '0' + n % 10;
			n /= 10;
		}
	else
	{
		while (n != 0)
		{
			tmp--;
			*tmp = '0' - n % 10;
			n /= 10;
		}
		tmp--;
		*tmp = '-';
	}
	return (copystring(tmp));
}
