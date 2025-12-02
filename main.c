/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ATsoufiane <atsoufiane.13@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:05:00 by ATsoufiane       #+#    #+#             */
/*   Updated: 2025/11/17 12:05:00 by ATsoufiane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	ft_ret;
	int	std_ret;
	int	num;
	void *ptr;

	num = 42;
	ptr = &num;

	// Test character
	ft_printf("=== Testing %%c (character) ===\n");
	ft_ret = ft_printf("ft_printf: %c\n", 'A');
	std_ret = printf("printf   : %c\n", 'A');
	ft_printf("ft_printf returned: %d, printf returned: %d\n\n", ft_ret, std_ret);

	// Test string
	ft_printf("=== Testing %%s (string) ===\n");
	ft_ret = ft_printf("ft_printf: %s\n", "Hello, World!");
	std_ret = printf("printf   : %s\n", "Hello, World!");
	ft_printf("ft_printf returned: %d, printf returned: %d\n\n", ft_ret, std_ret);

	// Test NULL string
	ft_printf("=== Testing %%s with NULL ===\n");
	ft_ret = ft_printf("ft_printf: %s\n", NULL);
	ft_printf("ft_printf returned: %d\n\n", ft_ret);

	// Test pointer
	ft_printf("=== Testing %%p (pointer) ===\n");
	ft_ret = ft_printf("ft_printf: %p\n", ptr);
	std_ret = printf("printf   : %p\n", ptr);
	ft_printf("ft_printf returned: %d, printf returned: %d\n\n", ft_ret, std_ret);

	// Test NULL pointer
	ft_printf("=== Testing %%p with NULL ===\n");
	ft_ret = ft_printf("ft_printf: %p\n", NULL);
	ft_printf("ft_printf returned: %d\n\n", ft_ret);

	// Test signed integers
	ft_printf("=== Testing %%d and %%i (signed integers) ===\n");
	ft_ret = ft_printf("ft_printf: %d, %i\n", 42, -42);
	std_ret = printf("printf   : %d, %i\n", 42, -42);
	ft_printf("ft_printf returned: %d, printf returned: %d\n\n", ft_ret, std_ret);

	// Test unsigned integers
	ft_printf("=== Testing %%u (unsigned integers) ===\n");
	ft_ret = ft_printf("ft_printf: %u\n", 4294967295U);
	std_ret = printf("printf   : %u\n", 4294967295U);
	ft_printf("ft_printf returned: %d, printf returned: %d\n\n", ft_ret, std_ret);

	// Test hexadecimal lowercase
	ft_printf("=== Testing %%x (hexadecimal lowercase) ===\n");
	ft_ret = ft_printf("ft_printf: %x\n", 255);
	std_ret = printf("printf   : %x\n", 255);
	ft_printf("ft_printf returned: %d, printf returned: %d\n\n", ft_ret, std_ret);

	// Test hexadecimal uppercase
	ft_printf("=== Testing %%X (hexadecimal uppercase) ===\n");
	ft_ret = ft_printf("ft_printf: %X\n", 255);
	std_ret = printf("printf   : %X\n", 255);
	ft_printf("ft_printf returned: %d, printf returned: %d\n\n", ft_ret, std_ret);

	// Test percent sign
	ft_printf("=== Testing %%%% (percent sign) ===\n");
	ft_ret = ft_printf("ft_printf: %%\n");
	std_ret = printf("printf   : %%\n");
	ft_printf("ft_printf returned: %d, printf returned: %d\n\n", ft_ret, std_ret);

	// Complex test
	ft_printf("=== Complex test ===\n");
	ft_ret = ft_printf("ft_printf: char=%c, str=%s, ptr=%p, dec=%d, hex=%x, pct=%%\n", 
		'Z', "test", ptr, -123, 456);
	std_ret = printf("printf   : char=%c, str=%s, ptr=%p, dec=%d, hex=%x, pct=%%\n", 
		'Z', "test", ptr, -123, 456);
	ft_printf("ft_printf returned: %d, printf returned: %d\n", ft_ret, std_ret);

	return (0);
}
