/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:07:56 by adrramos          #+#    #+#             */
/*   Updated: 2025/11/13 19:06:35 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	*str;
	unsigned char	letter;

	if (!s)
		return (NULL);
	letter = (unsigned char)c;
	count = 0;
	str = (unsigned char *)s;
	if (!str)
		return (NULL);
	while (count < n)
	{
		if (str[count] == letter)
			return ((void *)&str[count]);
		count++;
	}
	return (NULL);
}

/*int main (void)
{
	char str[] = "hello world!";
	char c = 'o';
	size_t search = ft_strlen(str);

	printf("%p", ft_memchr(str, c, search));
}*/
