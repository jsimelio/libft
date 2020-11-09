/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 09:36:06 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/09 15:41:28 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		start;
	int		len;

	if (!(strs = malloc(sizeof(char*) * 2)))
		return ((void*)(0));
	if (!*s || c == '\0')
		return (strs);
	len = ft_strlen(s);
	start = 0;
	while (s[start] && s[start] != c)
		start++;
	strs[0] = ft_substr(s, 0, start);
	strs[1] = ft_substr(s, start, len - start);
	return (strs);
}
