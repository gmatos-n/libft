/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:31:29 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/10/12 22:28:15 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp_dest;
	unsigned char	*temp_src;

	temp_dest = (unsigned char *)dest;
	temp_src = (unsigned char *)src;
	if (temp_src > temp_dest)
		return (ft_memcpy(dest, src, n));
	if (temp_src < temp_dest)
	{
		while (n--)
			temp_dest[n] = temp_src[n];
	}
	return (dest);
}

/* int main()
{
    char dest1[50] = "Hello, world!";
    char src1[50] = "Goodbye, cruel world!";
    char dest2[50];
    char src2[50] = "Overlapping test";
    
    // Test case 1: Non-overlapping regions
    printf("Before memmove dest1 = %s\n", dest1);
    printf("Before memmove src1 = %s\n", src1);
    ft_memmove(dest1, src1, 9);
    printf("After memmove dest1 = %s\n", dest1);

    // Test case 2: Overlapping regions, src before dest
    strcpy(dest2, "----------");
    strcpy(src2, "Overlapping test");
    printf("\nBefore memmove dest2 = %s\n", dest2);
    printf("Before memmove src2 = %s\n", src2);
    ft_memmove(dest2 + 3, src2, 9);
    printf("After memmove dest2 = %s\n", dest2);

    // Test case 3: Overlapping regions, dest before src
    strcpy(dest2, "Overlapping test");
    printf("\nBefore memmove dest2 = %s\n", dest2);
    ft_memmove(dest2, dest2 + 3, 9);
    printf("After memmove dest2 = %s\n", dest2);

    return 0;
} */