/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:52:12 by fgunay            #+#    #+#             */
/*   Updated: 2023/07/05 12:52:16 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;

	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	i = 0;
	if (size <= d_len)
		return (size + s_len);
	else
	{
		while (d_len + i < size - 1 && src[i])
		{
			dst[d_len + i] = src[i];
			i++;
		}
	}
	dst[d_len + i] = '\0';
	return (d_len + s_len);
}
/*
int	main(void)
{
	char dst[] = "abcd"; // Hedef karakter dizisi
	char src[] = "123";  // Kaynak karakter dizisi

	size_t result_len = ft_strlcat(dst, src, 5);

	printf("Toplam karakter sayısı: %zu\n", result_len);

	return (0);
}*/