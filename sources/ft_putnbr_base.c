/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 19:44:51 by marekald          #+#    #+#             */
/*   Updated: 2025/11/30 15:56:36 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_putnbr_base(char *base, long n)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(base);
	if (n < 0)
	{
		i += ft_putchar('-');
		n = n * -1;
	}
	if (n > (len - 1))
		i += ft_putnbr_base(base, n / len);
	i += write (1, &base[n % len], 1);
	return (i);
}
/*
int	main(void)
{
	int	n;

	n = 2147483645;
	ft_putnbr(n);
}
*/
