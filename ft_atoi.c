/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:40:59 by adrramos          #+#    #+#             */
/*   Updated: 2025/10/27 19:05:37 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Incompleto faltam as condicoes para */

int atoi(const char *nptr)
{
	unsigned int	num;
	unsigned int	sign;
	unsigned int	i;
	
	num = 0;
	sign = 1;
	i = 0;

	while( (nptr[i] < '0' || nptr[i] > '9') &&  nptr[i] != '-' && nptr[i] != '+')
	i++;
	while (nptr[i] == '-' || nptr[i] == '+' )
	{
		if (nptr[i] == '-')
		sign *= (-1);
		i++;
	}
	while (nptr[i])
	{
			num = num * 10 + num % 10;
			i++;
	}	
	return (num * sign);
}