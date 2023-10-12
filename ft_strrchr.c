/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:23:28 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/10/12 22:53:30 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i--;
	}
	return (NULL);
}

/* int main(void)
{
	char *str = "Hello World";
	char *ptr1;
	char *ptr2;

	ptr1 = ft_strrchr(str, 'W');
	printf("42 - %s\n", ptr1);
	ptr2 = strrchr(str, 'W');
	printf("OG - %s\n", ptr2);
	return 0;
} */