/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:28:23 by adrramos          #+#    #+#             */
/*   Updated: 2025/11/17 18:46:46 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	inset(char c, char const *set)
{
	size_t	i;

	i = 0;
	if (!set)
		return (0);
	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	if (s1[0] == '\0')
		return (ft_strdup(""));
	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	while (inset(s1[start], set) && s1[start] != '\0')
		start++;
	if (start > end)
		return (ft_strdup(""));
	while (inset(s1[end], set) && end >= start)
		end--;
	str = malloc(((end - start + 1) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (start <= end && s1)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
/*
int main (void)
{

}*/