/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize_main.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 17:20:05 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/22 18:47:12 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	t_list	element1;
	t_list	element2;
	t_list	element3;
	t_list	element4;
	int 	i;

	element1.next = &element2;
	element2.next = &element3;
	element3.next = &element4;
	i = ft_lstsize(&element1);
	printf("%d\n", i);
	return (0);
}
