/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:14:30 by dlima             #+#    #+#             */
/*   Updated: 2022/11/13 18:37:14 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*negative_converter(int n, int digits)
{
	char	*str;
	str = (char *)malloc((digits + 2) * sizeof(char));
	if (!str)
		return (NULL);
	str[digits + 1] = '\0';
	str[0] = '-';
	while (n / 10)
	{
		str[digits] = n % 10 + 48;
		digits--;
		n /= 10;
	}
	str[1] = n % 10 + 48;
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		digits;
	int		nbr;

	nbr = n;
	digits = 1;
	while (nbr / 10)
	{
		digits++;
		nbr /= 10;
	}
	if (n < 0)
		return (negative_converter(n * -1, digits));
	nbr = n;
	str = (char *)malloc((digits + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (nbr / 10)
	{
		str[digits - 1] = nbr % 10 + 48;
		nbr /= 10;
		digits--;
	}
	str[0] = nbr % 10 + 48;
	return (str);
}

int main()
{
	printf("%s\n", ft_itoa(-13));
	printf("%s\n", ft_itoa(15));
	printf("%s\n", ft_itoa(-123));
	printf("%s\n", ft_itoa(433974537));
	printf("%s\n", ft_itoa(-3));
}
