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
	size_t	srclen;
	size_t	i;

	srclen = ft_strlen(src);
	i = 0;
	if (size > 0)
	{
		while (i < (size - 1) && src[i]) 
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] =  '\0';
	}
	return (srclen);
}

/* Main meg
int main(void)
{ // ft_strlcpy and ft_strlcat
	const char *src = "Hello world!";
	char dst[4] = "amor";
	printf("len copied: %zu | dst: %s", ft_strlcopy(dst, src, 4), dst);
	return 0;
}*/

/*int main (void)
{
	char destino[50];
	char *origem = "asddfgh";
	
	printf("Meu %zu \n", ft_strlcpy(destino, origem, 60) );
	printf("Copied: %s\n", destino);
	return (0);
}*/
