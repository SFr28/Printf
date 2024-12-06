/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfraslin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:10:15 by sfraslin          #+#    #+#             */
/*   Updated: 2024/11/28 12:04:07 by sfraslin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	void	*ptr0 = NULL;
	char	str[] = "est";
	char	str2[] = "function";
	int		d = -1;
	char	c = 'e';
	void	*ptr;
	unsigned int	u = 4294967295;

	ptr = str;
	printf("count = %d\n", ft_printf("My function : %i%% Ceci %s %d t%cst. Voici un pointeur %p. HEXA: %X ; hexa: %x. Unsigned max = %u.\n", 100, str, d, c, ptr, 42, 985, u));
	printf("count = %d\n", printf("OG function : %i%% Ceci %s %d t%cst. Voici un pointeur %p. HEXA: %X ; hexa: %x. Unsigned max = %u.\n", 100, str, d, c, ptr, 42, 985, u));
	printf("count = %d\n", ft_printf("My %s : %%\n", str2));
	printf("count = %d\n", printf("OG %s : %%\n", str2));
	printf("OG: %d\n", printf(0));
	printf("Mine: %d\n", ft_printf(0));
	printf("OG : %d\n", printf("%s %s %s %s %s", " - ", "", "4", "", "2"));
	printf("Mine: %d\n", ft_printf("%s %s %s %s %s", " - ", "", "4", "", "2"));
	printf("OG : %d\n", printf(" NULL %s NULL ", NULL));
	printf("Mine: %d\n", ft_printf(" NULL %s NULL ", NULL));
	printf("OG : %d\n", printf("%p %p", ptr0, ptr0));
	printf("Mine: %d\n", ft_printf("%p %p", ptr0, ptr0));
	printf("OG : %d\n", printf("test %zz"));
	printf("Mine: %d\n", ft_printf("test %zz"));
	printf("OG : %d\n", printf("test % z"));
	printf("Mine: %d\n", ft_printf("test % z"));
	printf("OG : %d\n", printf("test %ztest"));
	printf("Mine: %d\n", ft_printf("test %ztest"));
	return (0);
}
