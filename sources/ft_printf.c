/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 19:44:42 by marekald          #+#    #+#             */
/*   Updated: 2025/11/30 16:56:20 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (write(1, "(null)", 6));
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}

static int	check_variable(va_list *ap, char c)
{
	void	*ptr;

	if (c == 'c')
		return (ft_putchar(va_arg(*ap, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(*ap, char *)));
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
	else if (c == 'p')
	{
		ptr = va_arg(*ap, void *);
		if (!ptr)
			return (write(1, "(nil)", 5));
		return (ft_putstr("0x") + ft_putnbr_base(HEX_MIN, (size_t)ptr));
	}
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
