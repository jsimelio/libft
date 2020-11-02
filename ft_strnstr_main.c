/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr_main.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 19:50:58 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/02 21:18:46 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LEN 100

int	main(void)
{
	char haystack[LEN] = "hello\0";
	char needle[LEN] = "el\0";
	int len = 10;

	printf("%s\n", ft_strnstr(haystack, needle, len));
	return (0);
}
