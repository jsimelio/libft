/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back_main.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 17:20:05 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/22 18:57:33 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	t_list	element1;
	t_list	element2;
	t_list	element3;
	t_list	element4;
	t_list	element5;
	t_list	*lst = &element1;

	element1.next = &element2;
	element2.next = &element3;
	element3.next = &element4;
	ft_lstadd_back(&lst, &element5);
	(ft_lstlast(lst))->content = "Hello mate\n";
	printf("%s\n", element5.content);
	return (0);
}
