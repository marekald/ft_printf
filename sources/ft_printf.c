/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 19:44:42 by marekald          #+#    #+#             */
/*   Updated: 2025/11/30 15:58:59 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	check_variable(va_list *ap, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(*ap, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(*ap, char *)));
	else if (c == 'p')
		return (ft_putstr("0x") + ft_putnbr_base(HEX_MIN, va_arg(*ap, size_t)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr_base(DEC, va_arg(*ap, int)));
	else if (c == 'u')
		return (ft_putnbr_base(DEC, va_arg(*ap, unsigned int)));
	else if (c == 'x')
		return (ft_putnbr_base(HEX_MIN, va_arg(*ap, unsigned int)));
	else if (c == 'X')
		return (ft_putnbr_base(HEX_MAYUS, va_arg(*ap, unsigned int)));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(char const *format, ...)
{
	int		i;
	int		total;
	va_list	ap;

	i = 0;
	total = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			total += check_variable(&ap, format[i]);
			i++;
		}
		else if (format[i] != '%')
		{
			ft_putchar(format[i]);
			total++;
			i++;
		}
	}
	va_end(ap);
	return (total);
}
/* 
#include <stdio.h>

int main()
{
	int		i;

	ft_printf("\n");

	printf("%%c: %c\n", 'a');
	i = ft_printf("%%c: %c\n", 'a');
	ft_printf("Caracteres: %i\n\n", i);

	printf("%%s: NULL %s NULL\n", "hola");
	i = ft_printf("%%s: NULL %s NULL\n", "hola");
	ft_printf("Caracteres: %i\n\n", i);

	printf("%%p: %p\n", &i);
	i = ft_printf("%%p: %p\n", &i);
	ft_printf("Caracteres: %i\n\n", i);

	printf("%%d: %d\n", 1234567890);
	i = ft_printf("%%d: %d\n", 1234567890);
	ft_printf("Caracteres: %i\n\n", i);

	printf("%%i: %i\n", 1234567890);
	i = ft_printf("%%i: %i\n", 1234567890);
	ft_printf("Caracteres: %i\n\n", i);

	printf("%%u: %u\n", -1234567890);
	i = ft_printf("%%u: %u\n", -1234567890);
	ft_printf("Caracteres: %i\n\n", i);

	printf("%%x: %x\n", 255);
	i = ft_printf("%%x: %x\n", 255);
	ft_printf("Caracteres: %i\n\n", i);

	printf("%%X: %X\n", 255);
	i = ft_printf("%%X: %X\n", 255);
	ft_printf("Caracteres: %i\n\n", i);

	printf("%%%%: %%\n");
	i = ft_printf("%%%%: %%\n");
	ft_printf("Caracteres: %i\n\n", i);

	return (0);
} */
