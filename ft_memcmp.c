/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:35:01 by adrramos          #+#    #+#             */
/*   Updated: 2025/11/06 20:40:11 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*string1;
	const unsigned char	*string2;
	size_t			i;
	int				calc;

	string1 = (const unsigned char *)s1;
	string2 = (const unsigned char *)s2;
	i = 0;
	calc = 0;
	while (i < n)
	{
		if (string1[i] != string2[i])
		{
			calc = string1[i] - string2[i];
			return (calc);
		}
		i++;
	}
	return (calc);
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