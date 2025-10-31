/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:29:48 by adrramos          #+#    #+#             */
/*   Updated: 2025/10/31 19:41:10 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t  i;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	i = 0;
	while (i < size)
	{
                d[i] = s[i];
		if (d[i] == '\0')
	        i++;
	}
	return (i); 
}

/*Confirmar o tamaho com base nas condicoe, 
se os tamanhos forem diferentes
 - se tam > n 
 - Se tam < n
EXAMPLES
     The following code fragment illustrates the simple case:
           char *s, *p, buf[BUFSIZ];
           ...
           (void)strlcpy(buf, s, sizeof(buf));
           (void)strlcat(buf, p, sizeof(buf));
     To detect truncation, perhaps while building a pathname, 
     something like the following might be
     used:
           char *dir, *file, pname[MAXPATHLEN];
           ...
           if (strlcpy(pname, dir, sizeof(pname)) >= sizeof(pname))
                   goto toolong;
           if (strlcat(pname, file, sizeof(pname)) >= sizeof(pname))
                   goto toolong;
     Since it is known how many characters were copied the first 
     time, things can be sped up a bit by
     using a copy instead of an append:
           char *dir, *file, pname[MAXPATHLEN];
           size_t n;
           ...
           n = strlcpy(pname, dir, sizeof(pname));
           if (n >= sizeof(pname))
                   goto toolong;
           if (strlcpy(pname + n, file, sizeof(pname) - n) >= 
           sizeof(pname) - n)
                   goto toolong;
*/