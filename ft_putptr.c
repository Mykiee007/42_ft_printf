/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 13:19:12 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/12/05 14:21:45 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int				count;
	unsigned long	n;

	count = 0;
	n = (unsigned long) ptr;
	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	count += ft_putstr("0x");
	count += ft_puthexlowerlong(n);
	return (count);
}
/*int main(void)
{
    int n[] = {0, 5, 42, -42, 1234, -1234, 2147483647, -2147483648};
    int i = 0;
    int r1, r2;
	
	while (i < 8)
    {
		
		printf("=== n = %d ===\n", n[i]);
		printf("Original: ");
        r1 = printf("%p", &n[i]);
		printf("\n");
        r2 = ft_putptr(&n[i]);
        printf("\nOriginal Count: %d\n", r1);
        printf("Function Count: %d\n\n", r2);
        i++;
    }
	printf("%p", NULL);
	printf("\n");
	ft_putptr(NULL);
	printf("\n");
	int x = 0;
	int *ptr = &x;
	ft_putptr(ptr);
	printf("\n%p\n", ptr);
	return (0);
}*/