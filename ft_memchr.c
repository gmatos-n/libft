/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:01:50 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/10/09 19:07:22 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	chr;

	ptr = (unsigned char *)str;
	chr = (unsigned char)c;
	while (n--)
	{
		if (*ptr == chr)
			return (ptr);
		ptr++;
	}
	return (NULL);
}

/* int main(void)
{
	char *str = "Hello World";
	char *ptr1;
	char *ptr2;

	ptr1 = ft_memchr(str, 'W', 15);
	printf("42 - %s\n", ptr1);
	ptr2 = memchr(str, 'W', 15);
	printf("OG - %s\n", ptr2);
	return 0;
} */