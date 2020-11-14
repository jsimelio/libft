/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew_main.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsimelio <jsimelio@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 12:24:31 by jsimelio      #+#    #+#                 */
/*   Updated: 2020/11/10 13:19:35 by jsimelio      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*str = "HiHello\0";
	t_list	*list_element;

	list_element = ft_lstnew(str);
	printf("%s", list_element->content);
}
