/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:18:49 by fgunay            #+#    #+#             */
/*   Updated: 2023/07/05 18:18:50 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (((unsigned char *)s) + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char str[] = "Hello world!";
	char search = 'd';
	size_t n = sizeof(str);

	void *result = ft_memchr(str, search, 12);

	if (result != NULL)
	{
		printf("Değer bulundu: %c\n", *(char *)result);
	}
	else
	{
		printf("Değer bulunamadı.\n");
	}

	return (0);
}*/