/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <dlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:18:40 by dlima             #+#    #+#             */
/*   Updated: 2022/12/13 17:50:15 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*ptr_src;
	char		*ptr_dest;
	size_t		i;

	i = 0;
	ptr_src = src;
	ptr_dest = dest;
	if (!src && !dest)
		return (NULL);
	if ((size_t)(dest - src) < n)
	{
		i = n - 1;
		while (n-- > 0)
		{
			ptr_dest[i] = ptr_src[i];
			i--;
		}
		return (dest);
	}
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (dest);
}
