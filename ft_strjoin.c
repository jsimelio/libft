/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 14:29:09 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/07 18:51:17 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		strlen;
	char	*s3;

	if (!s1 && !s2)
		return ((void*)(0));
	strlen = ft_strlen(s1) + ft_strlen(s2);
	if (!(s3 = malloc(strlen * sizeof(char))))
		return ((void*)(0));
	ft_strlcpy(s3, s1, ft_strlen(s1) + 1);
	ft_strlcat(s3, s2, strlen + 1);
	return (s3);
}
