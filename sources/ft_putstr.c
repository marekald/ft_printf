/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 19:44:52 by marekald          #+#    #+#             */
/*   Updated: 2025/11/28 19:44:53 by marekald         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

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
