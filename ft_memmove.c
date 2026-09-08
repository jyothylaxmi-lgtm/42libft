/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memmove.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/08 20:18:15 by username         #+#    #+#              */
/*   Updated: 2026/09/08 20:18:24 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaithav <jkaithav@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 13:50:25 by username          #+#    #+#             */
/*   Updated: 2026/09/08 19:27:09 by jkaithav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (dest);
	s = (const unsigned char *) src;
	d = (unsigned char *) dest;
	if (d < s)
	{
		while (n--)
		{
			*d = *s;
			d++;
			s++;
		}
	}
	else if (d > s)
	{
		while (n--)
			d[n] = s[n];
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
