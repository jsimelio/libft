/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup_main.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 09:52:55 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/15 16:50:19 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LEN 100

int	main(void)
{
	char *str;
	char *tmp = "this is a normal test";
	int r_size = strlen(tmp);
	int size;

	str = ft_strdup(tmp);
	size = get_last_malloc_size();
	if (size == r_size + 1)
		printf("success!");
	printf("failure!");
}
