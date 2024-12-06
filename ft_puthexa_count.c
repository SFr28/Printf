/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_count.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfraslin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:17:21 by sfraslin          #+#    #+#             */
/*   Updated: 2024/11/27 11:56:26 by sfraslin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_count(unsigned int nb, char c)
{
	char	str[16];
	char	*base;
	int		i;
	int		count;

	base = "0123456789ABCDEF";
	if (c == 'x')
		base = "0123456789abcdef";
	i = 0;
	while (nb >= 16)
	{
		str[i] = base[nb % 16];
		nb /= 16;
		i++;
	}
	count = i + 1;
	str[i] = base[nb % 16];
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return (count);
}

/*#include <stdio.h>
int main(void)
{
    int nb;

    nb = 589;
    ft_puthexa(nb, 'x');
    printf("\n%x\n", nb);
    return (0);
}*/
