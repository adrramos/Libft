/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:31:49 by adrramos          #+#    #+#             */
/*   Updated: 2025/11/01 15:21:11 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*source;
	size_t			i;

	d = (unsigned char *)dest;
	source = (unsigned char *)src;
	i = 0;
	while (source[i] && i < n)
	{
		d[i] = source[i];
		i++;
	}
	return (d);
}

/*confirmar retorno da funcao e se as 
vari'aveis sao as mais adequada*/