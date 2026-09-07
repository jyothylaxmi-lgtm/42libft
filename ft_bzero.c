/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaithav <jkaithav@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 18:20:57 by username          #+#    #+#             */
/*   Updated: 2026/09/04 11:55:46 by jkaithav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_bzero(void *s, size_t n);

// int	main(void)
// {
// 	char	str[] = "Hello w";

// 	ft_bzero(str, 3);
// 	printf("%s\n", str + 3);
// 	return (0);
// }

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n--)
	{
		ptr[n] = 0;
	}
}
