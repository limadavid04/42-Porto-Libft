/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <dlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:16:29 by dlima             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/12/13 17:19:03 by dlima            ###   ########.fr       */
=======
/*   Updated: 2022/11/22 11:08:11 by dlima            ###   ########.fr       */
>>>>>>> b795ede2e880a90bd39836e0a72e1eefbf8b7bfd
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	length;
	size_t	index;

	if (size == 0 || size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	length = ft_strlen(dst);
	index = 0;
	while (src[index] && length + 1 < size)
	{
		dst[length] = src[index];
		length++;
		index++;
	}
	dst[length] = 0;
	return (length + ft_strlen(&src[index]));
}
