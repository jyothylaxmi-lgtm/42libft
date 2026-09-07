/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaithav <jkaithav@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 14:55:07 by username          #+#    #+#             */
/*   Updated: 2026/09/05 18:23:09 by jkaithav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	int		i;

	i = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (size <= dlen)
		return (size + slen);
	i = 0;
	while (size > (dlen + i + 1) && src[i] != '\0')
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (slen + dlen);
}
/*
#include <stdio.h>
#include <stddef.h>
#include <string.h>
size_t	ft_strlcat(char *dst, const char *src, size_t size);

int	main(void)
{
char	dst[20] = "Hello";
char	src[] = " World";
size_t	result;

result = ft_strlcat(dst, src, 20);
printf("Result: %s\n", dst);
printf("Return value: %zu\n", result);
return (0);
}
*/
