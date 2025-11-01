/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:16:57 by adrramos          #+#    #+#             */
/*   Updated: 2025/11/01 17:50:12 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t			dstlen;
	size_t			srclen;
	size_t			i;

	dstlen = ft_strlen (dst);
	srclen = ft_strlen (src);
	i = 1;

	if (dstlen >= size -1)
		while (i < size -1)
		{
			dst[i] = src[i];
			i++;
		}
	return (srclen);
}

/*Confirmar o tamaho com base nas condicoe, 
se os tamanhos forem diferentes
 - se tam > n 
 - Se tam < n
*/
