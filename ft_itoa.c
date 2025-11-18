/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 19:16:21 by adrramos          #+#    #+#             */
/*   Updated: 2025/11/18 17:08:51 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countnum(int n)
{
	int		count;
	long	nbr;

	count = 0;
	nbr = n;
	if (n < 0)
	{
		count++;
		nbr = -nbr;
	}
	if (n == 0)
		count++;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			nlen;
	long int	nbr;

	nlen = countnum(n);
	nbr = n;
	str = (char *)malloc((nlen + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[nlen] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		str[0] = '0';
	while (nbr > 0)
	{
		nlen--;
		str[nlen] = ((nbr % 10) + '0');
		nbr = nbr / 10;
	}
	return (str);
}

/*int main(void)
{
	printf("%s\n", ft_itoa(-1234));
	printf("%s\n", ft_itoa(1234));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(INT_MIN));
}*/