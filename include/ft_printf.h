/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 19:44:38 by marekald          #+#    #+#             */
/*   Updated: 2025/11/30 15:58:54 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define DEC "0123456789"
# define HEX_MIN "0123456789abcdef"
# define HEX_MAYUS "0123456789ABCDEF"

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(char const *format, ...);
int	ft_putnbr_base(char *base, long n);

#endif