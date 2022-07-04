/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessamdi <oessamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:02:36 by oessamdi          #+#    #+#             */
/*   Updated: 2021/11/23 20:02:39 by oessamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new;
	void	*content;

	head = NULL;
	while (lst)
	{
		content = f(lst -> content);
		new = ft_lstnew(content);
		ft_lstadd_back(&head, new);
		lst = lst -> next;
	}
	if (del)
		del(0);
	return (head);
}
