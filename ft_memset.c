/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memset.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/01 18:02:57 by username         #+#    #+#              */
/*   Updated: 2026/09/04 12:38:07 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	size_t	i;

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
