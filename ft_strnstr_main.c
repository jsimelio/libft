/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr_main.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 19:50:58 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/03 12:50:30 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LEN 100

int	main(void)
{
	char haystack[LEN] = "hello\0";
	char needle[LEN] = "el\0";
	int len = 5;

	printf("%s\n", ft_strnstr(haystack, needle, len));
	return (0);
}
