/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <dlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:06:19 by dlima             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/12/14 15:34:02 by dlima            ###   ########.fr       */
=======
/*   Updated: 2022/12/14 11:37:49 by dlima            ###   ########.fr       */
>>>>>>> b795ede2e880a90bd39836e0a72e1eefbf8b7bfd
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*head;

	if (!lst || !f)
		return (NULL);
	head = NULL;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, temp);
		lst = lst->next;
	}
	return (head);
}
