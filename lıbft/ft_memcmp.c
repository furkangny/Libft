/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:35:15 by fgunay            #+#    #+#             */
/*   Updated: 2023/07/05 18:35:16 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include "libft.h"

int main()
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Hell";
    char str4[] = "Hella";
    
    int result1 = ft_memcmp(str1, str2, 0);
    int result2 = ft_memcmp(str1, str3, 5);
    int result3 = ft_memcmp(str3, str4, 4);
    
    printf("Result1: %d\n", result1);
    printf("Result2: %d\n", result2);
    printf("Result3: %d\n", result3);
    
    return 0;
}*/