/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <dlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:18:40 by dlima             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/12/13 17:50:15 by dlima            ###   ########.fr       */
=======
/*   Updated: 2022/12/13 19:01:02 by dlima            ###   ########.fr       */
>>>>>>> b795ede2e880a90bd39836e0a72e1eefbf8b7bfd
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
<<<<<<< HEAD
			ptr_dest[i] = ptr_src[i];
=======
			*((unsigned char *)dest + i) = *((unsigned char *)src + i);
>>>>>>> b795ede2e880a90bd39836e0a72e1eefbf8b7bfd
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
