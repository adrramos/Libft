/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 16:09:00 by adrramos          #+#    #+#             */
/*   Updated: 2025/11/01 17:52:58 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	unsigned int	i;
	unsigned int	j;
	
	substr = malloc(sizeof(char) * len); // +1
	if(!substr)
		return (NULL);
	i = start;
	while ( j < len && s[i])
	{
		
		j++;
		i++;
	}
	
}