/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast_main.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 17:20:05 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/22 18:49:42 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	t_list	element1;
	t_list	element2;
	t_list	element3;
	t_list	element4;

	element1.next = &element2;
	element2.next = &element3;
	element3.next = &element4;
	(ft_lstlast(&element1))->content = "Hello mate !\0";
	printf("%s\n", element4.content);
	return (0);
}
