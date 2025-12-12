/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ATsoufiane <atsoufiane.13@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:05:00 by ATsoufiane       #+#    #+#             */
/*   Updated: 2025/11/17 12:05:00 by ATsoufiane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_putnbr_unsigned(unsigned int n);
int		ft_puthex(unsigned long n, int uppercase);
int		ft_putptr(void *ptr);
int		ft_handle_format(char c, va_list args);

#endif
