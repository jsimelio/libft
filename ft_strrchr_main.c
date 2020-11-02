/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr_main.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 19:50:58 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/02 20:05:20 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LEN 100

int	main(void)
{
	char s[LEN] = "1test1?\0";
	char c = 't';
	printf("%s\n", strrchr(s, c));
	return (0);
}
