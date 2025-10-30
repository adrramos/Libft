/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:34:52 by adrramos          #+#    #+#             */
/*   Updated: 2025/10/30 15:11:41 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	position;
	size_t	j;

	i = 0;
	position = 0;
	j = 0;
	if (little[0] == '\0')
		return (*big);
	while (big[i])
	{
		while (little[j] == big[i] && j < len)
		{
			j++;
			i++;
		}
		return (big[i]);
		i++;
	}
	return (?);
}

/*
Duvida na posicao final   do array ou inicio
*/