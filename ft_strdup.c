/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:39:29 by adrramos          #+#    #+#             */
/*   Updated: 2025/10/30 15:54:14 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The  strdup() function returns a pointer to a new string which is a 
duplicate of the string s.Memory for the new string is obtained with 
malloc(3), and can be freed with free(3).*/

char *ft_strdup(const char *s)
{
	char	*dups;

	*dups = (char*) malloc (sizeof(char) * x);
	return (*dups);
}

/*
void main (void)
{
 	
}*/