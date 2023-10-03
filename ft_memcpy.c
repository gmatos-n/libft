/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:13:04 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/10/03 19:30:57 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*temp_dest;
	unsigned char	*temp_src;
	size_t			i;

	temp_dest = (unsigned char *)dest;
	temp_src = (unsigned char *)src;
	i = 0;
	if (temp_dest == temp_src)
		return (dest);
	while (i < n)
		temp_dest[i++] = temp_src[i];
	return (dest);
}

/* int main()
{
	char str[50] = "Destination unknown";
	char str2[50] = "Known destination";
	char str3[50] = "Destination unknown";
	char str4[50] = "Known destination";
	printf("Before ft_memcpy(): %s\n", str);
	printf("Before memcpy(): %s\n\n", str3);
	ft_memcpy(str, str2, strlen(str2) + 1);
	memcpy(str3, str4, strlen(str4) + 1);
	printf("After ft_memcpy():  %s\n", str);
	printf("After memcpy():  %s\n", str3);
	return 0;
} */
