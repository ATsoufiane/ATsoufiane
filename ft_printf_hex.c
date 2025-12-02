/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ATsoufiane <atsoufiane.13@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:05:00 by ATsoufiane       #+#    #+#             */
/*   Updated: 2025/11/17 12:05:00 by ATsoufiane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n, int uppercase)
{
	int		count;
	char	*base;

	count = 0;
	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
		count += ft_puthex(n / 16, uppercase);
	count += ft_putchar(base[n % 16]);
	return (count);
}

int	ft_putptr(void *ptr)
{
	int				count;
	unsigned long	address;

	count = 0;
	address = (unsigned long)ptr;
	if (!ptr)
		return (ft_putstr("(nil)"));
	count += ft_putstr("0x");
	count += ft_puthex(address, 0);
	return (count);
}
