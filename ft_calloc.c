/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:12:46 by adrramos          #+#    #+#             */
/*   Updated: 2025/11/06 16:39:35 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*straux;
	size_t	i;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > (SIZE_MAX / nmemb))
		return (NULL);
	straux = malloc(nmemb * size);
	if (!straux)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		straux[i] = 0;
		i++;
	}
	return (straux);
}

/*
int main (void)
{
	char	s[] = "Hello lad";
	char	*s1;
	int i = 0;
	s1 = ft_calloc(10, 1);
	//printf ( "%zu", strlen(s));
	while(s1[i])
		printf("%d", s1[i++]);
	free(s1);
	return (0);
}*/
