/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:51:01 by adrramos          #+#    #+#             */
/*   Updated: 2025/11/06 20:40:54 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*INCOMPLETO ver*/
static int	countwords(char const *str, char sep)
{
	int	i;
	int	count;

	if (!str)
		return (NULL);
	i = 0;
	count = 0;
	while (str)
	{
		if (str[i] == sep & str[i - 1] != sep)
		{
			count++;
			i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	char	*word;
	int		countw;

	countw = 0;
	if (!s)
		return (NULL);
	countw = countwords(s, c);
	str = malloc(sizeof(char) * (countw + 1));
	if (!str)
		return (NULL);
	while (s)
	{
	}
}

/*
static int	countwords(char const *str, char stop)
{
	int	count;
	int	move;

	if (!str)
		return (0);
	count = 0;
	move = 0;
	while (str)
	{
		if (str[move] == stop && str[move - 1] != stop)
			;
		count++;
		move++;
	}
	return (count);
}
static int	countetters(char const *s, char c)
{
	char *subword st_strlen(s)
}

char	**ft_split(char const *s, char c)
{
	char **str;
	int i; // para percorrer atring inicial
	int row;
	int col;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char) * (R * C + 1));
	if (!str)
		return (NULL);
	while (s)
	{
		if (s[i] == c)
			str[row][col] = s[i];
	}

	while (s[i] != '\0')
	{
		// alocar memoria...
		str = malloc(sizeof(char) * (st_strlen(s[]) + 1)) if (s[i] != c)
		{
			else
			{
				str[row][col] == '\0';
				free(str[row][col]);
				col = 0;
				row++;
			}
			else {

				col++;
			}
			i++;
		}

		return (**str); // Confirmar
	}
*/