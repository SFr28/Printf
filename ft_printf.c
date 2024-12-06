/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfraslin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:17:21 by sfraslin          #+#    #+#             */
/*   Updated: 2024/11/28 12:02:51 by sfraslin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type(char c, va_list arg_ptr)
{
	if (c == 'i' || c == 'd')
		return (ft_putnbr_count(va_arg(arg_ptr, int)));
	if (c == 's')
		return (ft_putstr_count(va_arg(arg_ptr, char *)));
	if (c == 'c')
		return (ft_putchar_count(va_arg(arg_ptr, int)));
	if (c == 'p')
		return (ft_putptr_count(va_arg(arg_ptr, unsigned long)));
	if (c == 'u')
		return (ft_putunbr_count(va_arg(arg_ptr, unsigned int)));
	if (c == 'x' || c == 'X')
		return (ft_puthexa_count(va_arg(arg_ptr, unsigned int), c));
	if (c == '%')
		return (ft_putchar_count(c));
	write(1, "%", 1);
	return (1);
}

int	ft_printf(const char *s, ...)
{
	va_list	arg_ptr;
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (!s)
		return (-1);
	va_start(arg_ptr, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] == ' ')
				return (-1);
			count += ft_type(s[i], arg_ptr);
		}
		else
			count += ft_putchar_count(s[i]);
		i++;
	}
	va_end(arg_ptr);
	return (count);
}
