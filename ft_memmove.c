/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <dlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:18:40 by dlima             #+#    #+#             */
/*   Updated: 2022/12/14 16:47:04 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;

	i = 0;
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
		*((unsigned char *)dest + i) = *((unsigned char *)src + i);
		i++;
	}
	return (dest);
}
