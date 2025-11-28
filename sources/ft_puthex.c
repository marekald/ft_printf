#include "../includes/ft_printf.h"

int	ft_puthex(size_t n, char x)
{
	char	*s;
	int		len;

	if (x == 'x')
		s = "0123456789abcdef";
	else
		s = "0123456789ABCDEF";
	len = 0;
	if (n > 15)
		len += ft_puthex(n / 16, x);
	write(1, &s[n % 16], 1);
	len++;
	return (len);
}
