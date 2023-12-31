/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:56:56 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/10/12 22:46:07 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	if (n == 0)
		return (0);
	while (*str1 && *str2 && n > 1)
	{
		if (*str1 != *str2)
			break ;
		str1++;
		str2++;
		n--;
	}
	return ((unsigned char)*str1 - (unsigned char)*str2);
}

/* int main()
{
	char str1[] = "Hello";
	char str2[] = "Hel1lo";
	printf("%d\n", ft_strncmp(str1, str2, 3));
	printf("%d\n", strncmp(str1, str2, 3));
	return (0);
} */