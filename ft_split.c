/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/07 11:26:05 by username         #+#    #+#              */
/*   Updated: 2026/09/08 21:05:23 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			words++;
		i++;
	}
	return (words);
}

static void	free_split(char **result, int count)
{
	while (count >= 0)
	{
		free(result[count]);
		count--;
	}
	free(result);
}

static char	*get_word(char const *s, int start, int len)
{
	char	*word;
	int		k;

	word = malloc((len + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	k = 0;
	while (k < len)
	{
		word[k] = s[start + k];
		k++;
	}
	word[k] = '\0';
	return (word);
}

static int	fill_words(char **result, char const *s, char c, int words)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (j < words)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		result[j] = get_word(s, start, i - start);
		if (result[j] == NULL)
		{
			free_split(result, j - 1);
			return (0);
		}
		j++;
	}
	result[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words;

	if (s == NULL)
		return (NULL);
	words = word_count(s, c);
	result = malloc((words + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	if (!fill_words(result, s, c, words))
		return (NULL);
	return (result);
}
