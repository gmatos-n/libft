/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:22:32 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/10/13 22:12:28 by gmatos-n         ###   ########.fr       */
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

int	alloc_and_free(char **split, int word, int j)
{
	int	i;

	i = 0;
	split[word] = (char *)malloc(j + 1);
	if (!split[word])
	{
		while (i < word)
		{
			free(split[i]);
			i++;
		}
		return (1);
	}
	return (0);
}

int	main_split(char **split, char const *s, char c)
{
	int	i;
	int	j;
	int	word;
	int	error;

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
			error = alloc_and_free(split, word, j);
			if (error)
				return (1);
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