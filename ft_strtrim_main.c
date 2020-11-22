/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim_main.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 09:52:55 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/22 17:07:23 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LEN 100

// int	main(void)
// {
// 	char s1[LEN] = "          ";
// 	char set[LEN] = " ";
// 	char *s3 = ft_strtrim(s1, set);
// 	printf("Result: \"%s\"", s3);
// 	free(s3);
// 	return (0);
// }

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int		main(void)
{
	char	*strtrim;

	char s1[] = "          ";
	if (!(strtrim = ft_strtrim(s1, " ")))
		ft_print_result("NULL");
	else
		ft_print_result(strtrim);
	if (strtrim == s1)
		ft_print_result("\nA new string was not returned");
	return (0);
}
