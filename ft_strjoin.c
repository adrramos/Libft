/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:55:05 by adrramos          #+#    #+#             */
/*   Updated: 2025/11/05 16:42:28 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	str = (char *) malloc((ft_strlen((char *)s1) + 
			ft_strlen((char *)s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while(s1[i] != '\0' )
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while(str[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
		i++;
	}
	str[i + j] = '\0';
	return(str);
}

/*int main (void)
{
	char *text1 = "Hello";
	char *text2 = "Bye";
	
	printf  ("%s",ft_strjoin(text1,text2));
}
*/
/*
confirmar se o poiters estao correctos...
*/