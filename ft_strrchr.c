/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:27:43 by adrramos          #+#    #+#             */
/*   Updated: 2025/11/13 16:55:22 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*result;

	i = 0;
	result = NULL;
	while ((unsigned char)s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			result = (char *)&s[i];
		i++;
	}
	if ((unsigned char)s[i] == (unsigned char)c)
		result = (char *)&s[i];
	return (result);
}
/*
int main(void)
{
	const char *str = "tarte";
	int c = 'a';
	printf("%s   %s", ft_strchr(str, c), strchr(str, c));
	return (0);
}*/