/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaithav <jkaithav@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 16:26:52 by username          #+#    #+#             */
/*   Updated: 2026/09/07 16:00:03 by jkaithav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	j = 0;
	i = strlen(big);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		return (big);
		if (big[i + j] == little[j] && little[j] != '\0')
			j++;
		if (little[j] == '\0')
			return ((char *) & big[j]);
		i++;
	}
	return (NULL);
}
