/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split_bkp.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 09:36:06 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/20 19:42:08 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_calloc.c"
#include "ft_memcpy.c"
#include "ft_strlen.c"
#include "ft_bzero.c"
#include "ft_memset.c"

static unsigned int	words_found(const char *str, char c);
static unsigned int	word_length(const char *str, char c);
static void	free_strings(char **arr, unsigned int words);
char		**ft_split(char const *s, char c);

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
	char *string = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.";
	char c = 'i';
	char **arr = ft_split(string, c);
	int i = 0;

	while (arr[i] != NULL)
	{
		ft_print_result(arr[i]);
		write(1, "\n", 1);
		i++;
	}
	// while (i < 13)
	// 	printf("%s\n", arr[i++]);
	// printf("%s\n%s\n%s\n%s\n%s\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	// printf("%d\n", word_length(string, c));
	free_strings(arr, 6);
	free(arr);
	return (0);
}

static unsigned int	words_found(const char *str, char c)
{
	unsigned int		words;
	char				previous;

	words = 0;
	previous = c;
	while (*str)
	{
		if (*str != c && previous == c)
			words++;
		previous = *str;
		str++;
	}
	return (words);
}

static unsigned int	word_length(const char *str, char c)
{
	unsigned int		len;

	if (*str == 0)
		return (0);
	len = 0;
	while (*str != c)
	{
		len++;
		str++;
	}
	return (len);
}

static void			free_strings(char **arr, unsigned int words)
{
	while (words > 0)
	{
		free(arr[words - 1]);
		words--;
	}
}

char				**ft_split(char const *s, char c)
{
	char			**arr;
	unsigned int	words;
	unsigned int	i;
	unsigned int	len;

	if (!s)
		return (NULL);
	words = words_found(s, c);
	if (!(arr = malloc(sizeof(char*) * (words + 1))))
		return (NULL);
	arr[words] = 0;
	i = 0;
	while (*s && i < words)
	{
		if (*s == c)
			s++;
		else
		{
			len = word_length(s, c);
			arr[i] = ft_calloc(1, sizeof(char) * (len + 1));
			if (!arr[i])
			{
				free_strings(arr, i + 1);
				free(arr);
				return (NULL);
			}
			ft_memcpy(arr[i], s, len);
			i++;
			s += len;
		}
	}
	return (arr);
}
