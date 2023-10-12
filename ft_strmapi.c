/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:56:04 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/10/12 21:43:56 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char test_function(unsigned int index, char c)
{
    return c + index;
} */

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char			*str;
	unsigned int	i;
	unsigned int	len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[len] = '\0';
	return (str);
}

/* int main()
{
    char *src = "Hello";
    char *res = ft_strmapi(src, test_function);

    if (res)
    {
        printf("Original: %s\n", src);
        printf("Mapped: %s\n", res);
        free(res);
    }
    else
    {
        printf("Error: could not allocate memory or invalid input.\n");
    }

    return 0;
} */