/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlen.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/04 11:50:40 by username         #+#    #+#              */
/*   Updated: 2026/09/04 12:06:41 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%zu\n", ft_strlen("fdsdsfds"));
// 	printf("%zu\n", ft_strlen("3423432edf"));

// 	return (0);
// }
