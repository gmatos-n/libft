/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 20:39:37 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/10/12 20:50:04 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void test_function(unsigned int index, char *c)
{
    *c = *c + index;
} */

void	ft_striteri(char *s, void (*f) (unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (*s)
		f(i++, s++);
}

/* int main()
{
    char str[] = "Hello";

    printf("Original: %s\n", str);
    ft_striteri(str, test_function);
    printf("After Iteration: %s\n", str);

    return 0;
} */