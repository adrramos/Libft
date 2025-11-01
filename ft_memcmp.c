/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:35:01 by adrramos          #+#    #+#             */
/*   Updated: 2025/11/01 15:20:55 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*string1;
	unsigned char	*string2;
	size_t			i;

	string1 = (unsigned char *) s1;
	string2 = (unsigned char *) s2;
	i = 0;
	if (n == 0)
		return (0);
	else
	{
		while (string1[i] == string2[i] && i < n)
			i++;
		return (string1[i] - string2[i]);
	}
}

/*
 Compare memory areas
 Testar!!!
 Confirmar se funciona quando e null 
 -  Quando compara com um a
 --- Esta com erros 
 */
/*void main (void) 
{
	unsigned char	*test1;
	unsigned char	*test2;
	unsigned int	result;

	*test1 = "HelloWorld";
	*test2 = "HelloWorld";
	result = ft_memcmp(*test1, *test2, 5);
	printf ("Diferenca das string:%i", result);
}*/