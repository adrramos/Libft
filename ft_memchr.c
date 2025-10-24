/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:07:56 by adrramos          #+#    #+#             */
/*   Updated: 2025/10/24 19:18:20 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			count;
	unsigned char 	*str;

	count = 0;
	*str = s;
	while(str[count] && count < n)
	{
		count++;	
	}
	
	return (*);
}
/*
Incompleto!!!!

The  memchr()  function  scans  the initial n bytes of 
the memory area pointed to by s for the
first instance of c.  Both c and the bytes 
of the memory area pointed to by s are  interpreted
as unsigned char.
*/