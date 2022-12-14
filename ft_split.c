/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <dlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:28:59 by dlima             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/12/14 16:29:04 by dlima            ###   ########.fr       */
=======
/*   Updated: 2022/12/14 12:46:17 by dlima            ###   ########.fr       */
>>>>>>> b795ede2e880a90bd39836e0a72e1eefbf8b7bfd
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	word_count(char *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] != c && str[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

static	int	char_nbr(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	return (i);
}

static	void	word_filler(char	*str, char	**buffer, char c)
{
	int	i;
	int	a;
	int	b;

	i = 0;
	a = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			b = 0;
			while (str[i] != c && str[i])
			{
				buffer[a][b] = str[i];
				b++;
				i++;
			}
			buffer[a][b] = '\0';
			a++;
		}
		else
			i++;
	}
}

static void	letter_alloc(char *str, char c, char **arr)
{
	int	pos;
	int	i;
	int	bytes;

	i = 0;
	pos = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			bytes = (char_nbr(&str[i], c) + 1) * sizeof(char);
			arr[pos] = (char *)malloc(sizeof(char) * bytes);
			while (str[i] != c && str[i])
				i++;
			pos++;
		}
		else
			i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*str;
	int		word_nbr;

	if (!s)
		return (NULL);
	str = (char *)s;
	word_nbr = word_count(str, c);
	arr = (char **)malloc((word_count(str, c) + 1) * sizeof(char *));
	if (!arr)
	{
		free(arr);
		return (NULL);
	}
	arr[word_nbr] = NULL;
	letter_alloc(str, c, arr);
	word_filler(str, arr, c);
	return (arr);
}
<<<<<<< HEAD

// int main()
// {
// 	int i = 0;

// 	while (arr[i])
// 	{
// 		printf("%s", arr[i]);
// 		i++;
// 	}

// }
=======
>>>>>>> b795ede2e880a90bd39836e0a72e1eefbf8b7bfd
