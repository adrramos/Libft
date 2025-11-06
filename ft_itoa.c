/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 19:16:21 by adrramos          #+#    #+#             */
/*   Updated: 2025/11/06 20:27:09 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countnum(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		count++;
		n = -n;
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}
char	*ft_itoa(int n)
{
	char	*str;
	int		nlen;
	int		i;

	nlen = countnum(n);
	str = (char *)malloc((nlen + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		str[i] = '-';
		i++;
		n = -n;
	}
	while (i <= nlen)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int main (void)
{
	int numTest = -90;
	char *result = ft_itoa(numTest);
	printf("%s", result);
	return (0);
}*/