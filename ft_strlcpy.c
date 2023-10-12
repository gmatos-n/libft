/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:21:23 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/10/12 21:31:08 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>

//#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (src[count])
		count++;
	if (size == 0)
		return (count);
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	if (size != 0)
		dest[i] = '\0';
	return (count);
}

/* int main()
{
	char str[50] = "Destination unknown";
	char str2[50] = "Known destination";
	char str3[50] = "Destination unknown";
	char str4[50] = "Known destination";
	printf("Before ft_strlcpy(): %s\n", str);
	printf("Before strlcpy(): %s\n\n", str3);
	ft_strlcpy(str, str2, strlen(str2) + 1);
	strlcpy(str3, str4, strlen(str4) + 1);
	printf("After ft_strlcpy():  %s\n", str);
	printf("After strlcpy():  %s\n", str3);
	return 0;
} */