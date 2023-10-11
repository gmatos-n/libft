/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:52:36 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/10/11 18:01:33 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	temp = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!temp)
		return (NULL);
	while (s1[i])
	{
		temp[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		temp[i] = s2[j];
		i++;
		j++;
	}
	temp[i] = '\0';
	return (temp);
}

/* int main(void)
{
	char *s1 = "Hello ";
	char *s2 = "World";
	char *ptr;

	ptr = ft_strjoin(s1, s2);
	printf("%s\n", ptr);
	return (0);
} */