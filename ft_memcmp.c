/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:41:58 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/10/09 19:48:14 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t size)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)str1;
	ptr2 = (unsigned char *)str2;
	if (size == 0)
		return (0);
	while (size--)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		if (size)
		{
			ptr1++;
			ptr2++;
		}
	}
	return (0);
}

/* int main(void)
{
	char str1[] = "";
	char str2[] = "";
	printf("%d\n", ft_memcmp(str1, str2, 11));
	printf("%d\n", memcmp(str1, str2, 11));
	return (0);
} */
