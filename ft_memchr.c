/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:07:56 by adrramos          #+#    #+#             */
/*   Updated: 2025/10/30 14:54:51 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	*str;
	unsigned char	letter;

	letter = (char) c;
	count = 0;
	*str = s;
	if (str[0] == NULL)
		return (NULL);
	else
	{
		while (str[count] && count < n)
		{
			if (str[count] == c)
				count++;
		}
		return (str[count]);
	}
}

/*
Incompleto!!!!
? converter em 
The  memchr()  function  scans  the initial n bytes of 
the memory area pointed to by s for the
first instance of c.  Both c and the bytes 
of the memory area pointed to by s are  interpreted
as unsigned char.
*/