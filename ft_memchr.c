/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:07:56 by adrramos          #+#    #+#             */
/*   Updated: 2025/11/01 15:20:14 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	*str;
	unsigned char	letter;

	letter = (unsigned char) c;
	count = 0;
	str = (unsigned char *) s;
	if (!str)
		return (NULL);
	while (count < n)
	{
		if (str[count] == c)
			return ((void *) &str[count]);
		count++;
	}
	return (0);
}

/*int main (void)
{
	char str[] = "hello world!";
	char c = 'o';
	size_t search = ft_strlen(str);
	
	printf("%p", ft_memchr(str, c, search));
}*/
