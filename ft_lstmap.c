/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:06:19 by dlima             #+#    #+#             */
/*   Updated: 2022/11/22 10:30:00 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	**head;

	head = (t_list **)malloc(sizeof(t_list **));
	node = lst;
	*head = node;
	while (node)
	{
		node = ft_lstnew(f(node));
		if (!node)
		{
			del(node->content);
			free(node);
		}
		else
			ft_lstadd_front(head, node);
		node = node->next;
	}
	return (node);
}
