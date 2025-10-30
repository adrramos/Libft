/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:32:07 by adrramos          #+#    #+#             */
/*   Updated: 2025/10/30 13:52:16 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
/* // For main without printf
#include <unistd.h>*/

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	unsigned int	i;

	*str = s;
	i = 0;
	while (i < n)
	{
		str[i] = '0';
		i++;
	}
}

/*void main (void)
{


}*/