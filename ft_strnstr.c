/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:07:03 by dlima             #+#    #+#             */
/*   Updated: 2022/10/24 17:35:33 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && little[j])
			j++;
		if (ft_strlen(little) == j)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char big[] = "aaabbbaaaac";
// 	char little[] = "ca";

// 	printf("%s", ft_strnstr(big, little, 15));
// }
