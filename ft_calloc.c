/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:12:46 by adrramos          #+#    #+#             */
/*   Updated: 2025/10/30 16:08:23 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char *straux;
	size_t	i;

	straux = malloc();
	i = 0;
	while (straux[i])
	{
		straux[i] = 0;
		i++;
	}
	straux[i] = '\0';
	
	return ();
	
/*	if (nmemb == 0 || size == 0)
		return (0);
	
	nmemb = malloc(sizeof(int) * size);*/
}
 /*
 Incompleto
 */