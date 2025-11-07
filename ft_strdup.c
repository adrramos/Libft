/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:39:29 by adrramos          #+#    #+#             */
/*   Updated: 2025/11/07 18:21:49 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strdup(const char *s)
{
	char	*dups;
	int		count;

	dups = malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!dups)
		return (NULL);
	count = 0;
	while (s[count])
	{
		dups[count] = s[count];
		count++;
	}
	dups[count] = '\0';
	return (dups);
}

/*int main (void)
{
	char aux[] = "Hellohelohenjjnknjoijoijoijoijj";
	char *copy;

	copy = ft_strdup (aux);
	printf ("%s \n", copy);
	printf ("%s \n", strdup(aux));
	printf ("%zu \n", sizeof(copy));
	return (0);
}*/