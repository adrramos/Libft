/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 16:09:00 by adrramos          #+#    #+#             */
/*   Updated: 2025/11/03 19:49:18 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*strcopy;
	size_t	i;
	
	if (start > ft_strlen(s) || (start + len  > t_strlen(s)))
		return (NULL);
		//- confirmar o return
	strcopy = ft_calloc(len , sizeof(char)); // ou versao com malloc ... anterior
	if(!strcopy)
		return (NULL);
	i = 0;
	while ( i < len && s[i])
	{
		strcopy[i] = s[start + i];
		i++;
	}
	strcopy[i] = '\0';
	return (strcopy);
}

/*int main (void)
{
}*/