/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_front_main.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 12:24:31 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/10 17:17:26 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;
	t_list	**list;

	first->content = "First.\n";
	second->content = "Second.\n";
	third->content = "Third.\n";
	first->next = NULL;
	second->next = third;
	third->next = NULL;
	list[0] = second;
	list[1] = third;
	list[2] = NULL;
	ft_lstadd_front(list, first);
	printf("%s\n", list[0]->content);
	int i = 0;
	while (i<3)
	{
		printf("%s\n", list[i]->content);
		i++;
	}
}
