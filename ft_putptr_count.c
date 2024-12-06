/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfraslin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:17:21 by sfraslin          #+#    #+#             */
/*   Updated: 2024/11/27 13:47:47 by sfraslin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_count(unsigned long ptr)
{
	char	str[16];
	char	*base;
	int		i;
	int		count;

	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	base = "0123456789abcdef";
	i = 0;
	while (ptr >= 16)
	{
		str[i++] = base[ptr % 16];
		ptr /= 16;
	}
	str[i] = base[ptr % 16];
	count = i + 3;
	while (i >= 0)
		write(1, &str[i--], 1);
	return (count);
}

/*#include <stdio.h>
int	main(void)
{
	void	*ptr;
	void	*ptr2;
	char	str[] = "test";
	char	str2[] = "test";

	ptr = str;
	ptr2 = str2;
	ft_putptr(ptr);
	printf("\nOG function: %p\n", ptr);
	ft_putptr(ptr2);
	printf("\nOG function: %p\n", ptr2);
	return (0);
}*/
