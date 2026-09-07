/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaithav <jkaithav@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 11:52:26 by username          #+#    #+#             */
/*   Updated: 2026/09/04 11:52:26 by jkaithav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
#include <stdio.h>

int	ft_isdigit(int c);

int	main(void)
{
printf("%d\n", ft_isdigit('0'));
printf("%d\n", ft_isdigit('z'));
printf("%d\n", ft_isdigit('5'));
printf("%d\n", ft_isdigit('!'));

return (0);
}*/
