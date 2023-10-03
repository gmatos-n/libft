/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:24:03 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/10/03 19:06:46 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*temp;
	size_t			i;

	temp = (unsigned char *)s;
	i = 0;
	while (i < n)
		temp[i++] = (unsigned char)c;
	return (s);
}

/* int main()
{
	char str[50] = "Middle is gonna be dots";
	char str2[50] = "Middle is gonna be dots";
	printf("Before ft_memset(): %s\n", str);
	printf("Before memset(): %s\n\n", str2);
	ft_memset(str + 6, '.', 10);
	memset(str2 + 6, '.', 10);
	printf("After ft_memset():  %s\n", str);
	printf("After memset():  %s\n", str2);
	return 0;
} */
