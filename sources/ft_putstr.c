#include "../includes/ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (write(1, "(null)", 6));
	else
	{
		while (s[i])
		{
			ft_putchar(s[i]);
			i++;
		}
		return (i);
	}
}
