/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaithav <jkaithav@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 11:52:33 by username          #+#    #+#             */
/*   Updated: 2026/09/04 11:52:33 by jkaithav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}
/*
#include <stdio.h>
int	ft_isprint(int c);

int	main(void)
{
printf("%d\n", ft_isprint('0'));
printf("%d\n", ft_isprint('z'));
printf("%d\n", ft_isprint('`'));
printf("%d\n", ft_isprint(' '));

return (0);
}
*/
