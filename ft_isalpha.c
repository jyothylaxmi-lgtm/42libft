/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaithav <jkaithav@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 14:40:37 by username          #+#    #+#             */
/*   Updated: 2026/09/04 11:51:54 by jkaithav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/*
#include <stdio.h>

int	ft_isalpha(int c);

int	main(void)
{
printf("%d\n", ft_isalpha('A'));
printf("%d\n", ft_isalpha('z'));
printf("%d\n", ft_isalpha('5'));
printf("%d\n", ft_isalpha('!'));

return (0);
}*/
