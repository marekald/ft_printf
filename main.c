/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 15:56:42 by marekald          #+#    #+#             */
/*   Updated: 2025/11/30 17:36:00 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "includes/ft_printf.h"

/* int	main(void)
{
	int	r1, r2;

	printf("Test: Char\n");
	r1 = printf("printf   : Char: %c\n", 'A');
	r2 = ft_printf("ft_printf: Char: %c\n", 'A');
	printf("ret printf   = %d\n", r1);
	printf("ret ft_printf= %d\n\n", r2);

	printf("Test: String\n");
	r1 = printf("printf   : String: %s\n", "Hello");
	r2 = ft_printf("ft_printf: String: %s\n", "Hello");
	printf("ret printf   = %d\n", r1);
	printf("ret ft_printf= %d\n\n", r2);

	printf("Test: Pointer\n");
	r1 = printf("printf   : Pointer: %p\n", (void*)0x1234abcd);
	r2 = ft_printf("ft_printf: Pointer: %p\n", (void*)0x1234abcd);
	printf("ret printf   = %d\n", r1);
	printf("ret ft_printf= %d\n\n", r2);

	printf("Test: Unsigned\n");
	r1 = printf("printf   : Unsigned: %u\n", 3000000000u);
	r2 = ft_printf("ft_printf: Unsigned: %u\n", 3000000000u);
	printf("ret printf   = %d\n", r1);
	printf("ret ft_printf= %d\n\n", r2);

	printf("Test: Hex\n");
	r1 = printf("printf   : hex: %x %X\n", 0x42, 0x42);
	r2 = ft_printf("ft_printf: hex: %x %X\n", 0x42, 0x42);
	printf("ret printf   = %d\n", r1);
	printf("ret ft_printf= %d\n\n", r2);

	printf("Test: Int\n");
	r1 = printf("printf   : dec: %i\n", -2147483647);
	r2 = ft_printf("ft_printf: hex: %i\n", -2147483647);
	printf("ret printf   = %d\n", r1);
	printf("ret ft_printf= %d\n\n", r2);
	
	printf("Test: Percent\n");
	r1 = printf("printf   : Percent: %%\n");
	r2 = ft_printf("ft_printf: Percent: %%\n");
	printf("ret printf   = %d\n", r1);
	printf("ret ft_printf= %d\n\n", r2);

	printf("Test: NULL string\n");
	r1 = printf("printf   : Null-s: %s\n", NULL);
	r2 = ft_printf("ft_printf: Null-s: %s\n", NULL);
	printf("ret printf   = %d\n", r1);
	printf("ret ft_printf= %d\n\n", r2);

	printf("Test: NULL pointer\n");
	r1 = printf("printf   : Null-p: %p\n", NULL);
	r2 = ft_printf("ft_printf: Null-p: %p\n", NULL);
	printf("ret printf   = %d\n", r1);
	printf("ret ft_printf= %d\n\n", r2);
} */

int	main(void)
{
	int		r1, r2;
	char	c = 'A';
	char	*s = "Hello";
	int		n = -42;
	unsigned	int u = 424242;
	void	*p = &n;

	r1 = printf("printf   : c=%c s=%s p=%p d=%d i=%i u=%u x=%x X=%X %%\n",
				c, s, p, n, n, u, u, u);
	r2 = ft_printf("ft_printf: c=%c s=%s p=%p d=%d i=%i u=%u x=%x X=%X %%\n",
					c, s, p, n, n, u, u, u);
	printf("ret printf   = %d\n", r1);
	printf("ret ft_printf= %d\n", r2);
}
