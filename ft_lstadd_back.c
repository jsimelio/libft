/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 17:20:05 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/16 18:01:48 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_element;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	if (new)
	{
		last_element = ft_lstlast(*lst);
		last_element->next = new;
	}
}
