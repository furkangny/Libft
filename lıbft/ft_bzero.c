/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:39:17 by fgunay            #+#    #+#             */
/*   Updated: 2023/07/04 11:39:19 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int main()
{
    char str[20] = "Hello World!";
    size_t n = sizeof(str);

    printf("Before bzero: %s\n", str);

    ft_bzero(str, 20);

    printf("After bzero: %s\n", str);

    return 0;
}
*/