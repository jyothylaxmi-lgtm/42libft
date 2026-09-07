/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaithav <jkaithav@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 17:44:05 by username          #+#    #+#             */
/*   Updated: 2026/09/04 18:53:06 by jkaithav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		neg;
	char	*result;
	long	number;
	size_t	len;
	size_t	i;

	len = 0;
	number = n;
	if (n < 0)
	{
		number = -number;
		neg = 1;
	}
	while (n > 0)
	{
		number = number / 10;
		len++;
	}
	if (n == 0)
		len = 1;
	if (n < 0)
		len++;
	result = malloc(len + 1);
	result[len] = '\0';
	while (number > 0)
	{
		result[len - i] = number % 10 + '0';
		i++;
		number = number / 10;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}
