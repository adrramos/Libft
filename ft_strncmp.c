/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:44:45 by adrramos          #+#    #+#             */
/*   Updated: 2025/10/24 19:07:16 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	count;

	count = 0;
	while (s1[count] && s1[count] && count < n)
	{
		if (s1[count] > s2[count])
		return (1);
		else if (s1[count] < s2[count])
		return (-1);
		else
		count++;
	}
	return(0);
}

/*confirmar as condicoes
 nor the length but the components of the string
 cofirmar se a condicao do 
*/
