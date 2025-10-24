/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:27:43 by adrramos          #+#    #+#             */
/*   Updated: 2025/10/24 18:27:58 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	unsigned char 	*str;
	unsigned int	i;
	unsigned int 	count;

	*str = s;
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			count++;
			i++;
		}
		else
			i++;
	}
	return (s[count]);
}
