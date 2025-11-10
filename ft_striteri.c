/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:58:10 by adrramos          #+#    #+#             */
/*   Updated: 2025/11/10 19:03:10 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*INCOMPLETO*/
void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
	char 			*str;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	str = ft_strdup(s);
	while (str[i])
	{
		(f)(i, str[i]);
		i++;
	}
}