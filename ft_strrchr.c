/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:27:43 by adrramos          #+#    #+#             */
/*   Updated: 2025/11/06 20:42:14 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*str;
	size_t			i;

	str = s;
	i = 0;
	while ((unsigned char *)s[i])
	{
		if ((unsigned char *)s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (str[i] == (unsigned char)c)
		return ((char *) &s[i]);
	return (NULL);
}

/*int main(void)
{
	const char *str = "tarte";
	int c = 'a';
	printf("%s   %s", ft_strchr(str, c), strchr(str, c));
	return (0);
}*/