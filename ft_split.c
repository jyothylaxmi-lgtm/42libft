/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaithav <jkaithav@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 11:26:05 by username          #+#    #+#             */
/*   Updated: 2026/09/07 14:41:50 by jkaithav         ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		words;
	int		start;
	int		wordlen;
	char	**result;

	i = 0;
	j = 0;
	words = word_count(s, c);
	result = malloc((words + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	while (j < words)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		wordlen = i - start;
		result[j] = malloc((wordlen + 1) * sizeof(char));
		if (result[j] == NULL)
			return (NULL);
		k = 0;
		while (k < wordlen)
		{
			result[j][k] = s[start + k];
			k++;
		}
		result[j][k] = '\0';
		j++;
	}
	result[j] = NULL;
	return (result);
}
