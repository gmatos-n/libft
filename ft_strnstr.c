/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:48:49 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/10/09 20:20:18 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*find)
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		while (find[j] && str[i + j] && str[i + j] == find[j] && i + j < len)
			j++;
		if (!find[j])
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

/* int main(void)
{
	char str[] = "Hello World";
	char find[] = "el";
	char *ptr1;
	char *ptr2;

	ptr1 = ft_strnstr(str, find, 11);
	printf("42 - %s\n", ptr1);
	ptr2 = strnstr(str, find, 11);
	printf("OG - %s\n", ptr2);
	return (0);
} */
