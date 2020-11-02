/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr_main.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 19:50:58 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/02 19:55:18 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LEN 100

int	main(void)
{
	char s[LEN] = "test1?\0";
	char c = 't';
	printf("%s\n", ft_strchr(s, c));
	return (0);
}
