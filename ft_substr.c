/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:02:25 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/10/11 17:52:19 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	temp = malloc(len + 1);
	if (!temp)
		return (NULL);
	ft_strlcpy(temp, s + start, len + 1);
	return (temp);
}

/* int	main(void)
{
        char src1[50] = "Hello World";
        int c = 0;
        unsigned int size = 100;

        char *dest1 = ft_substr(src1, c, size);

        printf("ft_substr: %s\n", dest1);
} */
