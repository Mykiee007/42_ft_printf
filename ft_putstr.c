/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 12:13:47 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/12/05 14:22:16 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	if (s == NULL)
		return (write(1, "(null)", 6));
	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}
/*		TEST		*/
/*
#include <stdio.h>

int main(void)
{
    char *s1 = "Hello, world!";
    char *s2 = "";
    char *s3 = "Testing 123";
    char *s4 = NULL;

    int r1, r2;

    printf("===== Test 1: normal string =====\n");
    r1 = printf("%s", s1);
	printf("\n");
    printf("printf returned: %d\n", r1);

    r2 = ft_putstr(s1);
    printf("\nft_putstr returned: %d\n\n", r2);

    printf("===== Test 2: empty string =====\n");
    r1 = printf("%s", s2);
	printf("\n");
    printf("printf returned: %d\n", r1);

    r2 = ft_putstr(s2);
    printf("\nft_putstr returned: %d\n\n", r2);

    printf("===== Test 3: another string =====\n");
    r1 = printf("%s", s3);
	printf("\n");
    printf("printf returned: %d\n", r1);

    r2 = ft_putstr(s3);
    printf("\nft_putstr returned: %d\n\n", r2);

    printf("===== Test 4: NULL pointer =====\n");
    printf("printf: ");
    r1 = printf("%s", s4); // may print (null) depending on OS
	printf("\n");     
    printf("printf returned: %d\n", r1);

    printf("ft_putstr: ");
    r2 = ft_putstr(s4);          // must NOT crash
    printf("\nft_putstr returned: %d\n\n", r2);

    return 0;
}*/