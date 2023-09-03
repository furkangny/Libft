/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:31:50 by fgunay            #+#    #+#             */
/*   Updated: 2023/07/05 12:31:59 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int main()
{
	char src[] = "ali";				 // Kaynak karakter dizisi
	char dest[] = "asd";			 // Hedef karakter dizisi
	size_t dest_size = sizeof(dest); // Hedef karakter dizisinin boyutu

	size_t result_len = ft_strlcpy(dest, src, 3);

	printf("Hedef karakter dizisi: %s\n", dest);
	printf("Kopyalanan karakter sayısı: %zu\n", result_len);

	return 0;
}*/