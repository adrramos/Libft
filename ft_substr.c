/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 16:09:00 by adrramos          #+#    #+#             */
/*   Updated: 2025/11/13 17:21:47 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*strcopy;
	size_t	i;

	// confirmar ifs
	if (!s)
		return (NULL);
	if (start > ((unsigned int) ft_strlen(s))|| 
	((start + len) > ((unsigned int)ft_strlen(s))))
		return (NULL);
	strcopy = calloc((len + 1), sizeof(char));
	if (!strcopy)
		return (NULL);
	i = 0;
	while ((i < len) && s[i])
	{
		strcopy[i] = s[start + i];
		i++;
	}
	strcopy[i] = '\0';
	return (strcopy);
}

/*int main (void)
{
confimar ' ' - caso start > ft_strlen(s)
 }*/