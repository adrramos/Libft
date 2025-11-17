/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:51:01 by adrramos          #+#    #+#             */
/*   Updated: 2025/11/17 19:24:07 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countwords(char const *str, char sep)
{
	int	count;
	int	is_word;

	if (!str)
		return (0);
	count = 0;
	is_word = 0;
	while (*str)
	{
		if (*str != sep && is_word == 0)
		{
			is_word = 1;
			count++;
		}
		else if (*str == sep)
			is_word = 0;
		str++;
	}
	return (count);
}

static char	*wordsep(char const *str, char sep)
{
	char	*word;
	size_t	len;
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	len = 0;
	while (str[len] && str[len] != sep)
		len++;
	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[len] = 0;
	return (word);
}

static void	*freefun(char **str, int size)
{
	while (size >= 0)
	{
		free(str[size]);
		size--;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;

	if (!s)
		return (NULL);
	str = malloc((countwords(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			break ;
		str[i] = wordsep(s, c);
		if (!str[i])
			return (freefun(str, (size_t)i - 1));
		i++;
		while (*s && (*s != c))
			s++;
	}
	str[i] = NULL;
	return (str);
}

/*int	main(void)
{
	int	counter;

	counter = countwords("      hello           this is the word    ",
			' ');
	printf("%d\n", counter);
}*/
