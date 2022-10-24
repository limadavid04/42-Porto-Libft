/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:18:40 by dlima             #+#    #+#             */
/*   Updated: 2022/10/21 16:57:01 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*ptr_src;
	char		*ptr_dest;
	char		*temp;
	size_t		i;

	i = 0;
	ptr_src = src;
	ptr_dest = dest;
	temp = (char *)malloc(n * sizeof(char));
	if (!src && !dest)
		return (NULL);
	while (i < n)
	{
		temp[i] = ptr_src[i];
		ptr_dest[i] = temp[i];
		i++;
	}
	free(temp);
	return (dest);
}

// int main(void)
// {
// 	char str1[] = "davi";
// 	char str2[7] = "jota";
// 	ft_memmove(str2, str1, 2);
// 	printf("%s", str2);
// }
