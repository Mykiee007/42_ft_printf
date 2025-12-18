/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlowerlong.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 15:17:17 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/12/05 14:26:03 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*int	ft_puthexlower(unsigned int a)
{
	int count;
	char *hex;

	hex = "0123456789abcdef";
	count = 0;
	if(a >= 16)
		count += ft_puthexlower(a / 16);
	count += ft_putchar (hex[a % 16]);
	return (count);
}*/

int	ft_puthexlowerlong(unsigned long a)
{
	int		count;
	char	*hex;

	hex = "0123456789abcdef";
	count = 0;
	if (a >= 16)
		count += ft_puthexlowerlong(a / 16);
	count += ft_putchar (hex[a % 16]);
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
        r1 = printf("%x", n[i]);
		printf("\n");
        r2 = ft_puthexlowerlong(n[i]);
        printf("\nOriginal Count: %d\n", r1);
        printf("Function Count: %d\n\n", r2);
        i++;
    }
	return (0);
}*/