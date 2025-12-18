/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 15:17:17 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/12/05 14:22:52 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int a)
{
	int	count;

	count = 0;
	if (a < 0)
		a = -a;
	else if (a > 9)
		count += ft_putunsigned(a / 10);
	count += ft_putchar ((a % 10) + '0');
	return (count);
}

/*		Test		*/
/*#include <stdio.h>
#include <limits.h>

int main(void)
{
    int n[] = {0, 5, 42, -42, 1234, -1234, 2147483647, -2147483648};
    int i = 0;
    int r1, r2;

    while (i < 8)
    {
        printf("=== n = %d ===\n", n[i]);
		printf("Original: ");
        r1 = printf("%u", n[i]);
		printf("\n");
        r2 = ft_putunsigned(n[i]);
        printf("\nOriginal Count: %d\n", r1);
        printf("Function Count: %d\n\n", r2);
        i++;
    }
}*/