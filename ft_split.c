/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:22:32 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/10/12 23:51:43 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

void	write_word(char *word, char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
}

void	free_split(char **split, char const *s, char c)
{
	int	i;

	i = 0;
	while (i < ft_count_words(s, c))
		free(split[i++]);
}

int	main_split(char **split, char const *s, char c)
{
	int	i;
	int	j;
	int	word;
	int	k;

	word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			j = 0;
			while (s[i + j] != c && s[i + j])
				j++;
			split[word] = (char *)malloc(j + 1);
			if (!split[word])
			{
				k = 0;
				while (k < word)
				{
					free(split[k]);
					k++;
				}
				return (1);
			}
			write_word(split[word], s + i, c);
			i += j;
			word++;
		}
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**final;
	int		error;
	int		num_words;

	if (!s)
		return (NULL);
	num_words = ft_count_words(s, c);
	final = malloc(sizeof(char *) * (num_words + 1));
	if (!final)
		return (NULL);
	error = main_split(final, s, c);
	if (error)
	{
		free(final);
		return (NULL);
	}
	final[num_words] = 0;
	return (final);
}

/* int main(void)
{
	char **split = ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", '^');

	for (int i = 0; split[i] != NULL; i++)
	{
		printf("%s\n", split[i]);
		free(split[i]);
	}
	free(split);
	return (0);
} */