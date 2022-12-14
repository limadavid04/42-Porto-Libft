/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <dlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:00:13 by dlima             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/12/13 17:51:08 by dlima            ###   ########.fr       */
=======
/*   Updated: 2022/12/13 19:06:27 by dlima            ###   ########.fr       */
>>>>>>> b795ede2e880a90bd39836e0a72e1eefbf8b7bfd
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
