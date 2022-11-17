/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:39:02 by dlima             #+#    #+#             */
/*   Updated: 2022/11/17 15:42:03 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		char_ignored;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	char_ignored = 0;
	while (ft_strchr(set, s1[start]) && s1[start])
	{
		char_ignored++;
		start++;
	}
	end = ft_strlen(s1) -1;
	while (ft_strchr(set, s1[end]) && s1[end])
	{
		char_ignored++;
		end--;
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) - char_ignored + 1));
	str = ft_substr(s1, start, end - start + 1);
	return (str);
}
// int main() {
// 	char s1[] = " david e o rei  ";
// 	char set[3] = " ";

// 	printf("%s", ft_strtrim(s1, set));
// }
