/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:29:48 by adrramos          #+#    #+#             */
/*   Updated: 2025/11/01 16:27:52 by adrramos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*INCOMPLETO!!!!!!*/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			dstlen;
	size_t			srclen;

	dstlen = ft_strlen (dst);
	srclen = ft_strlen (src);
	size_t			i;
	if (dstlen >= size)
		return (dstlen + size); // Confirmar
	if (dstlen + srclen >= size)
	{
		while ((i < dstlen - size - 1) && src[i])
		{
			dst[dstlen + i] = src[i];
			i++;
		}
		dst[dstlen + i] = '\0';
		return (dstlen + srclen);
	}
}

/*
int main (void)
{

}*/
/*
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