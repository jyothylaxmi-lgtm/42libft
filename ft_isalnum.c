/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaithav <jkaithav@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 11:51:38 by username          #+#    #+#             */
/*   Updated: 2026/09/07 19:03:31 by jkaithav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int num;
	num =(c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
			(c >= '0' && c <= '9');
	return (num);
}
/*
#include <stdio.h>

int	ft_isalnum(int c);

int	main(void)
{
printf("%d\n", ft_isalnum('0'));
printf("%d\n", ft_isalnum('z'));
printf("%d\n", ft_isalnum('5'));
printf("%d\n", ft_isalnum('!'));

return (0);
}
*/
