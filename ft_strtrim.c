/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:28:23 by adrramos          #+#    #+#             */
/*   Updated: 2025/11/05 16:40:40 by adrramos         ###   ########.fr       */
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

size_t	ft_countset (char const *s1 , char const *set)
{
	size_t	count;
	size_t	i;
	size_t	j;

	if(!set)
		return (0);
	i = 0;
	count = 0;
	while (s1[i])
	{
		j = 0;
		while(set[j])
		{
			if (s1[i] == set[j])
				count++;
			j++;	
		}
		i++;	
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char 	*str;
	size_t	countset;
	int		i;
	int		j;
	int		position;

	i = -1;
	position = -1;
	countset = ft_countset((char*)s1, (char*)set);
	str = malloc((ft_strlen((char *)s1) - countset + 1) * sizeof(char));
	if(!str)
		return (NULL);
	while(s1[++i])
	{
		j = -1;
		while(set[++j])
		{
			if(s1[i] != set[j])
				str[++position] = s1[i];
		}
	}
	return (str);
}
/*
int main (void) 
{
	
}*/