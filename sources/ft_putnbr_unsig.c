#include "../includes/ft_printf.h"

int	ft_putnbr_unsig(unsigned int n)
{
	char	*s;
	int		len;

	s = "0123456789";
	len = 0;
	if (n > 9)
		len += ft_putnbr(n / 10);
	write(1, &s[n % 10], 1);
	len++;
	return (len);
}
