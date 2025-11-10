/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:16:57 by adrramos          #+#    #+#             */
/*   Updated: 2025/11/10 18:32:19 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	size_t	cpylen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	cpylen = 0;
	if (!src)
		return (0);
	if (size > 0)
	{
		if (srclen > size)
			cpylen = size - 1;
		else 
			cpylen = dstlen;
		ft_memcpy(dst, src,cpylen);
		dst[cpylen] = '\0';
		return (srclen);
	}
	return (srclen);
}

/*int main (void)
{
	char destino[50];
	char *origem = "asddfgh";
	
	printf("Meu %zu \n", ft_strlcpy(destino, origem, 60) );
	printf("Copied: %s\n", destino);
	return (0);
}*/