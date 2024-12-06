/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfraslin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:27:51 by sfraslin          #+#    #+#             */
/*   Updated: 2024/11/27 11:55:08 by sfraslin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_count(int n)
{
	long int	nb;
	char		str[11];
	int			i;
	int			count;

	i = 0;
	nb = n;
	count = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
		count = 1;
	}
	while (nb >= 10)
	{
		str[i++] = (nb % 10) + 48;
		nb = nb / 10;
	}
	count = count + i + 1;
	str[i] = nb + 48;
	while (i >= 0)
		write(1, &str[i--], 1);
	return (count);
}
