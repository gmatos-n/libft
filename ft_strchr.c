/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:20:45 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/10/12 22:49:40 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != (char)c)
	{
		if (!*str)
			return (NULL);
		str++;
	}
	return ((char *)str);
}

/* int main(void)
{
	char *str = "teste";
	char *ptr1;
	char *ptr2;

	ptr1 = ft_strchr(str, '\0');
	printf("42 - %s\n", ptr1);
	ptr2 = strchr(str, '\0');
	printf("OG - %s\n", ptr2);
	return 0;
} */