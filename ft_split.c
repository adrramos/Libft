/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:51:01 by adrramos          #+#    #+#             */
/*   Updated: 2025/11/10 21:20:10 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*INCOMPLETO*/
static int	countwords(char const *str, char sep)
{
	int	i;
	int	count;
	int	is_word;

	if (!str)
		return (0);
	i = -1;
	count = 0;
	is_word = 0;
	while (str[++i])
	{
		while (str[i] == sep)
		{
			i++;
			is_word = 0;
			if (str[i + 1] == '\0')
				return (count);
		}
		if (str[i] != sep && is_word == 0)
		{
			is_word = 1;
			count++;
		}
	}
	return (count);
}

static char *countletters(char const *str, char sep)
{
	int		i;
	int		countletter;

	if (!str)
		return (0);
	i = 0;
	while (str[i] == sep)
		i++;
	while (str[i] && str[i] != sep)
	{
		countletter++;
		i++;
	}
	return (countletter);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	char	*word;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	str = calloc( (countwords(s, c) + 1) , sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;

	while (i <= countwords(s, c) && *s)
	{
		word = calloc(sizeof(char), (countletters(&s, c) + 1));
		j = 0;
		word = ft_strdup(&s);
		while(j <= countletters(*s + j, c))
		{
			str[i][j] = s[i];
			i++;
			j++;
		}
		str[i][j] = '\0';
		free(word);
	}
	*str[i] = '\0';
}

/*int	main(void)
{
	int	counter;

	counter = countwords("                     hello           this is the word                              ",
			' ');
	printf("%d\n", counter);
}*/
