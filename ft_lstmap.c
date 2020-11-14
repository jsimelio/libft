/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 18:29:14 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/10 19:35:18 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	// t_list	*newlst;

	// if (lst && f && del)
	// {
	// 	if (newlst = (t_list*)malloc(sizeof(t_list*)) == NULL)
	// 		return (NULL);
	// 	ft_lstiter(lst, f);
	// 	lst = lst->next;
	// 	free(lst);
	// 	return(newlst);
	// }
	return (lst);
}
