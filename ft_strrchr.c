/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:27:43 by adrramos          #+#    #+#             */
/*   Updated: 2025/10/31 18:15:46 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char 	*str;
	unsigned int	i;
	unsigned int	position;

	*str = s;
	i = 0;
	position = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			position = i;
			i++;
		}
		else
			i++;
	}
	return (s[position]);
}

/*void main(void)
{
	char	*aux;
	
}*/