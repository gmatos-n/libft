/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:01:48 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/10/11 18:22:17 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_separator(char c, char const *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && is_separator(s1[i], set))
		i++;
	while (j > 0 && is_separator(s1[j], set))
		j--;
	if (j < i)
		return (ft_strdup(""));
	return (ft_substr(s1, i, j - i + 1));
}

/* int main(void)
{
	char *s1 = "12321a32123";
	char *set = "123";
	char *ptr;

	ptr = ft_strtrim(s1, set);
	printf("%s\n", ptr);
	return (0);
} */