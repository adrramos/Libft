/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:16:57 by adrramos          #+#    #+#             */
/*   Updated: 2025/10/23 19:28:37 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	*d = dst;
	*s = src;
	i = 1;
	while (i < size)
	{
		d[i] = s[i];
		i++;
	}
	return (i);
}

/*Confirmar o tamaho com base nas condicoe, 
se os tamanhos forem diferentes
 - se tam > n 
 - Se tam < n
*/
