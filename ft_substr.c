/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaithav <jkaithav@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 18:34:32 by username          #+#    #+#             */
/*   Updated: 2026/09/04 11:49:19 by jkaithav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	size_t	str_len;
	char	*sub;

	i = 0;
	str_len = ft_strlen(s);
	while (str_len > start)
	{
		if (i < len)
		{
			sub[i] = s[i];
			i++;
		}
		return (sub);
	}
	return (NULL);
}
