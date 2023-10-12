/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:29:37 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/10/12 18:55:10 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static int	ft_is_negative(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		neg;

	neg = ft_is_negative(n);
	i = ft_count_digits(n);
	str = malloc(i + neg + 1);
	if (!str)
		return (NULL);
	str[i + neg] = '\0';
	while (i--)
	{
		str[i + neg] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}

/* int main()
{
	int n = -2147483648;
	char *str = ft_itoa(n);
	printf("%s\n", str);
	return (0);
} */