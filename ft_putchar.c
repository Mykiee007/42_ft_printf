/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 11:29:07 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/12/04 15:44:39 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}

/*		TEST		*/
/*
#include <stdio.h>

int main(void)
{
    int ret;

    printf("=== TEST 1: Normal characters ===\n");
    int a = 'A';
	ret = ft_putchar(a);
    printf(" | return = %d\n", ret);
	printf("%c | original\n", a);
	
	a = 'z';
    ret = ft_putchar(a);
    printf(" | return = %d\n", ret);
	printf("%c | original\n", a);

    printf("\n=== TEST 2: ASCII edges ===\n");
    a = 0;
	ret = ft_putchar(a);      // invisible
    printf(" | [printed NUL] return = %d\n", ret);
	printf("%c | original\n", a);

	a = 127;
    ret = ft_putchar(a);    // DEL
    printf(" | [printed DEL] return = %d\n", ret);
	printf("%c | original\n", a);

	a = 255;
    ret = ft_putchar(a);    // extended
    printf(" | [printed 255] return = %d\n", ret);
	printf("%c | original\n", a);

    printf("\n=== TEST 3: Negative values ===\n");
    a = -1;
	ret = ft_putchar(a);
    printf(" | return = %d\n", ret);
	printf("%c | original\n", a);

    a = -128;
	ret = ft_putchar(a);
    printf(" | return = %d\n", ret);
	printf("%c | original\n", a);

    printf("\n=== TEST 4: Percent sign ===\n");
    a = '%';
	ret = ft_putchar(a);
    printf(" | return = %d\n", ret);
	printf("%c | original\n", a);

    printf("\n=== TEST 5: Chain of characters ===\n");
    ret = ft_putchar('X');
    ret += ft_putchar('Y');
    ret += ft_putchar('X');
    printf(" | total return = %d\n", ret);

    return 0;
}*/