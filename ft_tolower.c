/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:53:13 by adrramos          #+#    #+#             */
/*   Updated: 2025/10/23 19:54:25 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* convert lowercase */
int ft_tolower(int c)
{	
	if (c <= 'A'  && c  <= 'Z')
		return (c + 32);
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