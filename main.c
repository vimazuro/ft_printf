/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:37:49 by vimazuro          #+#    #+#             */
/*   Updated: 2024/10/24 15:11:01 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int		result;
	int		result_my;
	int	d;
	int	d2;
	int	d3;
	int	d4;
	char	c;
	char	s[] = "String for check";
	char	*s2 = NULL;
	char	*ptr;

// %c	
	c = 'Y';
	result = printf("Test c: %c\n", c);
	printf("printf return: %d\n", result);
	result_my = ft_printf("Test c: %c\n", c);
	ft_printf("ft_printf return: %d\n\n", result_my);
// %s
	result = printf("Test s: %s\n", s);
	printf("printf return: %d\n", result);
	result_my = ft_printf("Test s: %s\n", s);
	ft_printf("ft_printf return: %d\n", result_my);
	result = printf("Test s: %s\n", s2);
	printf("printf return: %d\n", result);
	result_my = ft_printf("Test s: %s\n", s2);
	ft_printf("ft_printf return: %d\n\n", result_my);
// %p
	ptr = NULL;
	result = printf("Test p: %p\n", ptr);
	printf("printf return: %d\n", result);
	result_my = ft_printf("Test p: %p\n", ptr);
	ft_printf("ft_printf return: %d\n", result_my);
	ptr = "q";
	result = printf("Test p: %p\n", ptr);
	printf("printf return: %d\n", result);
	result_my = ft_printf("Test p: %p\n", ptr);
	ft_printf("ft_printf return: %d\n\n", result_my);
// %d
	d = -2147483648;
	d2 = 0;
	d3 = 558;
	d4 = -25;
	result = printf("Test d: %d and %d and %d and %d\n", d, d2, d3, d4);
	printf("printf return: %d\n", result);
	result_my = ft_printf("Test d: %d and %d and %d and %d\n", d, d2, d3, d4);
	ft_printf("ft_printf return: %d\n\n", result_my);
// %i
	result = printf("Test i: %i and %i and %i and %i\n", d, d2, d3, d4);
	printf("printf return: %d\n", result);
	result_my = ft_printf("Test i: %i and %i and %i and %i\n", d, d2, d3, d4);
	ft_printf("ft_printf return: %d\n\n", result_my);
// %u
	result = printf("Test u: %u and %u and %u and %u\n", d, d2, d3, d4);
	printf("printf return: %d\n", result);
	result_my = ft_printf("Test u: %u and %u and %u and %u\n", d, d2, d3, d4);
	ft_printf("ft_printf return: %d\n\n", result_my);
// %x
	result = printf("Test x: %x and %x and %x and %x\n", d, d2, d3, d4);
	printf("printf return: %d\n", result);
	result_my = ft_printf("Test x: %x and %x and %x and %x\n", d, d2, d3, d4);
	ft_printf("ft_printf return: %d\n\n", result_my);
// %X
	result = printf("Test X: %X and %X and %X and %X\n", d, d2, d3, d4);
	printf("printf return: %d\n", result);
	result_my = ft_printf("Test X: %X and %X and %X and %X\n", d, d2, d3, d4);
	ft_printf("ft_printf return: %d\n\n", result_my);
// %%
	result = printf("Test percent: %%\n");
	printf("printf return: %d\n", result);
	result_my = ft_printf("Test percent: %%\n");
	ft_printf("ft_printf return: %d\n\n", result_my);
	return (0);
}
