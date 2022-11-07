/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:16:29 by dlima             #+#    #+#             */
/*   Updated: 2022/11/07 17:49:13 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char	*pdest;
	size_t	i;

	if (!src)
		return (0);
	pdest = dest;
	i = ft_strlen(dest) + ft_strlen(src);
	while (*pdest != '\0')
		pdest++;
	if (size > 0)
		ft_memcpy(pdest, src, size);
	pdest[size] = '\0';
	return (i);
}
