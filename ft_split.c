/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:51:01 by adrramos          #+#    #+#             */
/*   Updated: 2025/11/05 20:23:35 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int countwords(char const *str, char stop)
{
	int 	count;
	int		move;

	if (!str)
		return (0);
	count = 0;
	move = 0;
	while (str)
	{
		if (str[move] == stop && str[move - 1] != stop);
			count++;
		move++;
	}
	return (count);
}
static int countetters(char const *s, char c)
{
	char * subword
	st_strlen(s)
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i; // para percorrer atring inicial
	int		row;
	int		col;
	int		maxrow;
	int		maxcol;
	maxrow = countwords(s, c);
	
	str = malloc(sizeof(char) * (R * C +1)); 
		// como saber a dimensao de cada substring
	if(!str)
		return (NULL);
	while(s)
	{
		if (s[i] == c)
			str[row][col] = s[i];
	}
	
while (s[i] != '\0')
{
	//alocar memoria...	
	str = malloc(sizeof(char) * (st_strlen(s[]) +1))
	if (s[i] != c)
	{
	
	else
	{
		str[row][col] == '\0';
		free (str[row][col]);
		col = 0;
		row++;
	}
	else
	{
		
		
		col++:
	}
	i++;
}




	
	return (**str); //Confirmar
}
