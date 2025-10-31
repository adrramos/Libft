/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:59:36 by adrramos          #+#    #+#             */
/*   Updated: 2025/10/31 19:36:59 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*str;
	unsigned int	i;

	str = (unsigned char*)s;
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char*)&str[i]);
		i++;
	}
	if ((char)c == '\0')
	 	return ((char*)&str[i]);
	return (NULL);
}

/*
ver melhor os pointer aqui
	- que valor fica  e como fica.
*/