/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:46:28 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/10/09 18:17:18 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <bsd/string.h>

size_t	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (dest[count])
		count++;
	if (count >= size)
		return (size + ft_strlen(src));
	while (src[i] && (count + i) < (size - 1))
	{
		dest[count + i] = src[i];
		i++;
	}
	dest[count + i] = '\0';
	return (count + ft_strlen(src));
}

/* int main(void)
{
        char dest1[50] = "Hello";
        char dest2[50] = "Hello";
        char src[] = " World";
        unsigned int size = 20;

        unsigned int result1 = ft_strlcat(dest1, src, size);
        unsigned int result2 = strlcat(dest2, src, size);

        printf("ft_strlcat: %s (return value: %u)\n", dest1, result1);
        printf("strlcat: %s (return value: %u)\n", dest2, result2);

        if (strcmp(dest1, dest2) == 0 && result1 == result2)
                printf("WORKING, result is the same!\n");
        else
                printf("ERROR ERROR ERROR!\n");
        return 0;
} */