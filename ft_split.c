/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 09:36:06 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/20 19:19:22 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "ft_calloc.c"
// #include "ft_memcpy.c"
// #include "ft_strlen.c"
// #include "ft_bzero.c"
// #include "ft_memset.c"

// static unsigned int	words_found(const char *str, char c);
// static unsigned int	word_length(const char *str, char c);
// static void	free_strings(char **arr, unsigned int words);
// char		**ft_split(char const *s, char c);

// int	main(void)
// {
// 	char *string = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
// 	// char *string = "\0";
// 	char c = ' ';
// 	char **arr = ft_split(string, c);
// 	int i = 0;
// 	while (i < 13)
// 		printf("%s\n", arr[i++]);
// 	// printf("%s\n%s\n%s\n%s\n%s\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
// 	// printf("%d\n", word_length(string, c));
// 	free_strings(arr, 6);
// 	free(arr);
// 	return (0);
// }

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

// works!
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

static void	free_strings(char **arr, unsigned int words)
{
	while (words > 0)
	{
		free(arr[words - 1]);
		words--;
	}
}

// static char	**add_one_ptr(char **arr, int arr_len)
// {
// 	char	**new_arr;
// 	int		i;

// 	i = 0;
// 	if (!(new_arr = malloc(sizeof(char*) * (arr_len + 1))))
// 		return (NULL);
// 	while (i > arr_len)
// 	{
// 		arr[i] = new_arr[i];
// 		free(arr[i]);
// 		i++;
// 	}
// 	if (arr)
// 		free (arr);
// 	new_arr[i] = NULL;
// 	return (new_arr);
// }

char		**ft_split(char const *s, char c)
{
	char	**arr;
	unsigned int		words;
	unsigned int		i;
	unsigned int		len;

	if (!s)
		return (NULL);
	words = words_found(s, c);
	if (!(arr = malloc(sizeof(char*) * (words + 1))))
		return (NULL);
	i = 0;
	while (*s && i < words)
	{
		if (*s == c)
			s++;
		else
		{
			len = word_length(s, c);

			// if (!(arr[words] = ft_substr(s, 0, len)))
			// {
			// 	printf("Don't go in here!\n");
			// 	free_strings(arr, i);
			// 	free(arr);
			// 	return (NULL);
			// }
			arr[i] = ft_calloc(1, sizeof(char) * (len + 1));
			if (!arr[i])
			{
				free_strings(arr, i + 1);
				free(arr);
				return (NULL);
			}
			ft_memcpy(arr[i], s, len);
			// ft_strlcpy(arr[words], s, len + 1);
			// arr[words] = ft_substr(s, 0, len);
			i++;
			s += len;
		}
	}

	// if (!*s || c == '\0')
	// 	return (arr);
	
	// len = ft_strlen(s);
	// start = 0;
	// while (s[start] && s[start] != c)
	// 	start++;
	// arr[0] = ft_substr(s, 0, start);
	// arr[1] = ft_substr(s, start, len - start);
	return (arr);
}


// Pseudocode in parts:
// 1. dynamically allocate a new array, when a new word is found
// 2. the part that locates each word
// 3. malloc each word


// Maybe simpler option: 
// 1. make counter for words found
// 2. loop through string and find how many words
// 3. allocate array, then find each word.
