/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:16:57 by adrramos          #+#    #+#             */
/*   Updated: 2025/11/03 19:09:39 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t			dstlen;
	size_t			srclen;
	size_t			i;

	dstlen = ft_strlen (dst);
	srclen = ft_strlen ((char*) src);
	i = 0;
	if (size > 0)
	{
		if (dstlen >= size - 1)
			return (dstlen + size);
		while (src[i] && i < size)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
		return (dstlen);
	}
	return(srclen);
}

/*Confirmar o tamaho com base nas condicoe, 
se os tamanhos forem diferentes
 - se tam > n 
 - Se tam < n
*/
