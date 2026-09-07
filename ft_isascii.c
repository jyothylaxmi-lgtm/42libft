/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isascii.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/04 11:52:06 by username         #+#    #+#              */
/*   Updated: 2026/09/04 11:57:58 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// #include <stdio.h>

// int	ft_isascii(int c);

// int	main(void)
// {
// 	printf("%d\n", ft_isascii('0'));
// 	printf("%d\n", ft_isascii('z'));
// 	printf("%d\n", ft_isascii('`'));
// 	printf("%d\n", ft_isascii('!'));

// 	return (0);
// }
