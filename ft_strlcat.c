/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:29:48 by adrramos          #+#    #+#             */
/*   Updated: 2025/10/23 19:34:43 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	*d = dst;
	*s = src;
	i = 1;
	while (i < size)
	{
		d[i] = s[i];
		if ( d[i] == '\0') // condicao?
		i++;
	}
	
	return (i); //Confirmar o retorno
}

/*Confirmar o tamaho com base nas condicoe, 
se os tamanhos forem diferentes
 - se tam > n 
 - Se tam < n
*/
 /*EXAMPLES
     The following code fragment illustrates the simple case:

           char *s, *p, buf[BUFSIZ];

           ...

           (void)strlcpy(buf, s, sizeof(buf));
           (void)strlcat(buf, p, sizeof(buf));

     To detect truncation, perhaps while building a pathname, something like the following might be
     used:

           char *dir, *file, pname[MAXPATHLEN];

           ...

           if (strlcpy(pname, dir, sizeof(pname)) >= sizeof(pname))
                   goto toolong;
           if (strlcat(pname, file, sizeof(pname)) >= sizeof(pname))
                   goto toolong;

     Since it is known how many characters were copied the first time, things can be sped up a bit by
     using a copy instead of an append:

           char *dir, *file, pname[MAXPATHLEN];
           size_t n;

           ...

           n = strlcpy(pname, dir, sizeof(pname));
           if (n >= sizeof(pname))
                   goto toolong;
           if (strlcpy(pname + n, file, sizeof(pname) - n) >= sizeof(pname) - n)
                   goto toolong;

*/