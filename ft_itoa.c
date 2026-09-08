/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itoa.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/04 17:44:05 by username         #+#    #+#              */
/*   Updated: 2026/09/08 20:42:30 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft.h"

static size_t	num_len(long n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	fill_number(char *str, long n, size_t len)
{
	while (n > 0)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	long	number;
	size_t	len;
	char	*result;

	number = n;
	len = 0;
	if (number < 0)
	{
		number = -number;
		len = 1;
	}
	len += num_len(number);
	result = ft_calloc(len + 1, 1);
	if (!result)
		return (NULL);
	fill_number(result, number, len);
	if (n == 0)
		result[0] = '0';
	else if (n < 0)
		result[0] = '-';
	return (result);
}
