/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_count.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfraslin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:17:21 by sfraslin          #+#    #+#             */
/*   Updated: 2024/11/27 11:55:31 by sfraslin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr_count(unsigned int n)
{
	char		str[11];
	int			i;
	int			count;

	i = 0;
	while (n >= 10)
	{
		str[i] = (n % 10) + 48;
		n = n / 10;
		i++;
	}
	count = i + 1;
	str[i] = n + 48;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return (count);
}
