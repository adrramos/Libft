/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:19:56 by adrramos          #+#    #+#             */
/*   Updated: 2025/10/23 18:20:16 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned int	i;

	*str = s;
	i = 0;
	while (str[i] != '\0' && i < n)
	{
		str[i] = '0';
		i++;
	}
	return (*str);
}
