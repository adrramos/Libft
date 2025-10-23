/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:35:40 by adrramos          #+#    #+#             */
/*   Updated: 2025/10/23 19:54:33 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* convert uppercase */

int toupper(int c)
{	
	if (c <= 'a'  && c  <= 'z')
		return (c - 32);
	else 
		return (c);
	
	return (0);
}
/*confirmar o tipo de vari'avel
que 'e input
- Ser'a necessario algum tipo de ajuste
- Como tratar os  
int toupper(int c)

The value returned is that of the converted letter, 
  or c if the conversion was not possible.

*/