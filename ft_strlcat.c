/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:29:48 by adrramos          #+#    #+#             */
/*   Updated: 2025/11/06 20:41:34 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	if (size <=  dstlen)
		return (srclen + size);
	while (((dstlen + i) < (size - 1)) && src[i])
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

/*int main(void)
{
	char destination[20] = "Hello, ";
	const char *source = "World!";
	size_t total_length;
	size_t total_lengthft;

	total_length = strlcat(destination, source, sizeof(destination));
	total_lengthft = ft_strlcat(destination, source, sizeof(destination));
	printf("Concatenated string: %s\n", destination);
	printf("Total length: %zu\n", total_length);
	printf("Total length meu: %zu\n", total_lengthft);
	return (0);
}*/