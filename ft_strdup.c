/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:53:29 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/10/09 20:59:31 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*cpy;
	int		i;

	i = 0;
	cpy = malloc(ft_strlen(src) + 1);
	if (!cpy)
		return (NULL);
	i = -1;
	while (src[++i])
		cpy[i] = src[i];
	cpy[i] = 0;
	return (cpy);
}

/* int main(void)
{
	char *ptr;
	char *ptr2;

	ptr = ft_strdup("");
	ptr2 = strdup("");
	printf("%s\n", ptr);
	printf("%s\n", ptr2);
	return (0);
} */
