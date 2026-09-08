/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaithav <jkaithav@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 18:02:57 by username          #+#    #+#             */
/*   Updated: 2026/09/08 19:03:24 by jkaithav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n);

int	main(void)
{
char	str[] = "Hello";

ft_memset(str, 'X', 3);
printf("%s\n", str);
return (0);
}
*/
