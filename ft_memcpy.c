/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaithav <jkaithav@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 18:57:22 by username          #+#    #+#             */
/*   Updated: 2026/09/04 11:52:49 by jkaithav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	main(void)
// {
// 	char	csrc[] = "GeeksforGeeks";
// 	char	cdest[100];

// 	ft_memcpy(cdest, csrc, strlen(csrc) + 1);
// 	printf("Copied string is %s", cdest);
// 	int	isrc[] =
// 	{
// 		10, 20, 30, 40, 50
// 	};
// 	int	n = sizeof(isrc) / sizeof(isrc[0]);
// 	int	idest[n], i;

// 	ft_memcpy(idest, isrc, sizeof(isrc));
// 	printf("\nCopied array is ");
// 	for (i = 0; i < n; i++)
// 		printf("%d ", idest[i]);
// 	return (0);
// }

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;

	d = (char *) dest;
	const char	*s;

	s = (const char *) src;
	while (n--)
	{
		d[n] = s[n];
	}
	return (dest);
}
