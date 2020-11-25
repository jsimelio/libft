/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 10:04:17 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/25 22:57:09 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_copystring(char *tmp, size_t i)
{
	int		j;
	char	*str;

	j = 0;
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	while (tmp[j])
	{
		str[j] = tmp[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

int			ft_sign(char **tmp, int sign)
{
	if (sign == -1)
	{
		(*tmp)--;
		**tmp = '-';
		return (-1);
	}
	return (0);
}

char		*ft_itoa(int n)
{
	char	*tmp;
	char	tmp2[INT_MAX_32BIT + 2];
	size_t	i;
	int		sign;

	i = 1;
	tmp = tmp2 + INT_MAX_32BIT + 1;
	if (n < 0)
		sign = -1;
	if (n == 0)
		tmp = "0";
	else
		while (n != 0)
		{
			tmp--;
			if (n > 0)
				*tmp = '0' + n % 10;
			else
				*tmp = '0' - n % 10;
			n /= 10;
			i++;
		}
	if (ft_sign(&tmp, sign) == -1)
		i++;
	return (ft_copystring(tmp, i));
}
