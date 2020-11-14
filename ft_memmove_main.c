/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove_main.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 09:52:55 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/14 18:10:39 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LEN 100

int	main(void)
{
	char src[LEN] = "Hi Hello";
	char dst[LEN];
	*dst = src[3];
	printf("%s", memmove(dst, src,9));
	return (0);
}


// memmove return values :
// both parameters NULL, positive len : NULL
// both parameters NULL, len = 0 : NULL
// src = NULL, dest = Hello, len = 0 : dest
// src = NULL, dest = Hello, len = 6 : segv
// src = Hi Helo, dest = Hello, len = 0 : dest
// src = Hi Hello, dest = NULL, len = 0 : dest
// 
