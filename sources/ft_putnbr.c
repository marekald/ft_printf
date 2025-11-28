#include "../includes/ft_printf.h"

int	ft_putnbr(int n)
{
	char	*s;
	int		len;
	long	nb;

	nb = n;
	s = "0123456789";
	len = 0;
	if (nb > 2147483647 || nb < -2147483648)
		return (0);
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
		len++;
	}
	if (nb > 9)
		len += ft_putnbr(n / 10);
	write(1, &s[nb % 10], 1);
	len++;
	return (len);
}
/*
int	main(void)
{
	int	n;

	n = 2147483645;
	ft_putnbr(n);
}
*/
