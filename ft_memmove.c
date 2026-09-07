/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaithav <jkaithav@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 13:50:25 by username          #+#    #+#             */
/*   Updated: 2026/09/05 19:08:19 by jkaithav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	s = (char *) src;
	d = (char *) dest;
	if (d == NULL || s == NULL)
		return (dest);
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (dest);
}

/*
#include <stddef.h>
#include <string.h>
#include <stdio.h>
int	main(void)
{
char	csrc[100] = "Geeksfor";

memmove(csrc, csrc + 5, 3);
printf("%s", csrc);
return (0);
}
*/
