/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:14:45 by dlima             #+#    #+#             */
/*   Updated: 2022/10/21 16:52:07 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!dest || !src)
		return (0);
	while (i < (size - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (ft_strlen(src));
}

// int main(void)
// {
// 	char dest[9];
// 	char src[20] = "olaaaa";
// 	size_t	i;

// 	i = ft_strlcpy(dest, src, 9);
// 	printf("%s, ft_strlcpy returns: %ld", dest, i);
// }
