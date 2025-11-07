/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:40:59 by adrramos          #+#    #+#             */
/*   Updated: 2025/11/07 18:20:32 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long int		num;
	int				sign;
	unsigned int	i;

	num = 0;
	sign = 1;
	i = 0;
	while (nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\r'
		|| nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= (-1);
		i++;
	}
	while (nptr[i] && ft_isdigit(nptr[i]) == 1)
	{
		num = num * 10 + (nptr[i] - '0');
		i++;
	}
	return ((int)num * sign);
}

/*int main(void)
{
	char *num = "-123";
	printf("Original: %i\n",atoi(num));
	printf("Meu: %i\n",ft_atoi(num));
}*/