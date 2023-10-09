/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:20:45 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/10/09 18:44:52 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (!str)
		return (NULL);
	while (*str != c)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return ((char *)str);
}

/* int main(void)
{
	char *str = "Hello World";
	char *ptr1;
	char *ptr2;

	ptr1 = ft_strchr(str, 'H');
	printf("42 - %s\n", ptr1);
	ptr2 = strchr(str, 'H');
	printf("OG - %s\n", ptr2);
	return 0;
} */