/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:42:28 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/10/09 20:53:11 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char		*ptr;

	ptr = malloc(nitems * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nitems * size);
	return (ptr);
}

/* int main(void)
{
	char *ptr;
	char *ptr2;

	ptr = ft_calloc(5, 5);
	ptr2 = calloc(5, 5);
	printf("%s\n", ptr);
	printf("%s\n", ptr2);
	return (0);
} */
