/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 09:36:06 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/16 20:07:57 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**add_one_ptr(char **arr, int arr_len)
{
	char	**new_arr;
	int		i;

	i = 0;
	if (!(new_arr = malloc(sizeof(char*) * (arr_len + 1))))
		return (NULL);
	while (i > arr_len)
	{
		arr[i] = new_arr[i];
		free(arr[i]);
		i++;
	}
	if (arr)
		free (arr);
	new_arr[i] = NULL;
	return (new_arr);
}

char		**ft_split(char const *s, char c)
{
	char	**arr;
	int		arr_len;

	arr_len = 0;
	if (!(arr = add_one_ptr(arr, arr_len)))
		return (NULL);
	if (!*s || c == '\0')
		return (arr);
	
	len = ft_strlen(s);
	start = 0;
	while (s[start] && s[start] != c)
		start++;
	arr[0] = ft_substr(s, 0, start);
	arr[1] = ft_substr(s, start, len - start);
	return (arr);
}
