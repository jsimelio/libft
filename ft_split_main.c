/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split_main.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 09:52:55 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/22 17:30:07 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LEN 100

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int	main(void)
{
	char *string = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
	char c = ' ';
	char **s3 = ft_split(string, c);
	// printf("%s\n%s\n", s3[0], s3[1]);
	int i = 0;
	while (s3[i] != '\0')
	{
		ft_print_result(s3[i]);
		write(1, "\n", 1);
		i++;
	}
	free(s3);
	return (0);
}
