/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:32:13 by dlima             #+#    #+#             */
/*   Updated: 2022/11/07 18:25:49 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	size;
	size_t	len_s1;

	size = ft_strlen(s1) + ft_strlen(s2) +1;
	ptr = (char *)malloc(sizeof(char) * size);
	ft_strlcpy(ptr, s1, size);
	len_s1 = ft_strlen(s1);
	ft_strlcpy(&ptr[len_s1], s2, size - len_s1);
	return (ptr);
}

// int	main()
// {
// 	char	s1[] = "d";
// 	char	s2[] = "lima";
// 	printf("%s", ft_strjoin(s1, s2));
// }
