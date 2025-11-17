/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 16:09:00 by adrramos          #+#    #+#             */
/*   Updated: 2025/11/17 18:47:31 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*strcopy;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= (size_t)ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	strcopy = ft_calloc((len + 1), sizeof(char));
	if (!strcopy)
		return (NULL);
	i = 0;
	while ((i < len) && s[start + i])
	{
		strcopy[i] = s[start + i];
		i++;
	}
	return (strcopy);
}

/*int main (void)
{
confimar ' ' - caso start > ft_strlen(s)
 }*/