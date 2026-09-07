/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaithav <jkaithav@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 19:04:30 by username          #+#    #+#             */
/*   Updated: 2026/09/04 15:53:58 by jkaithav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	search;

	search = (char) c;
	while (*s != '\0')
	{
		if (*s == search)
			return ((char *) s);
		*s++;
	}
	if (*s == search)
		return ((char *) s);
	return (NULL);
}
