/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:59:36 by adrramos          #+#    #+#             */
/*   Updated: 2025/10/24 16:28:18 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
	unsigned char 	*str;
	unsigned int	i;
	
	*str = s;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (s[i]);
		else
			i++;
	}
	return (s[i]);
}

/*
ver melhor os pointer aqui
	- que valor fica  e como fica.
*/