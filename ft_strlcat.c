/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:29:20 by mait-elk          #+#    #+#             */
/*   Updated: 2023/11/06 22:59:41 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t _nsx_strlen(const char *s)
{
	size_t l;

	l = 0;
	while(*s)
	{
		s++;
		l++;
	}
	return (l);
}

size_t	ft_strlcat(char * dst, const char * src, size_t dstsize)
{
	// size_t c;
	// size_t d;

	// if (dstsize <= ft_strlen(dst))
	// 	return (dstsize + ft_strlen(src));
	// c = _nsx_strlen(dst);
	// d = 0;
	// while (src[d] && c < dstsize - 1)
	// {
	// 	dst[c] = src[d];
	// 	c++;
	// 	d++;
	// }
	// dst[c] = '\0';
	// return (_nsx_strlen(dst) + _nsx_strlen(&src[d]));

	size_t i;
	size_t destlen;
	size_t srclen;

	destlen = _nsx_strlen(dst);
	srclen = _nsx_strlen(src);
	if (dstsize <= destlen)
		return (srclen + dstsize);
	while (src[i] && destlen < dstsize - 1)
	{
		dst[destlen] = src[i];
		destlen++;
		i++;
	}
	dst[destlen] = '\0';
	return (destlen + srclen);

	// size_t destlen = _nsx_strlen(dst);
    // size_t srclen = _nsx_strlen(src);
    // size_t i = destlen;
    // size_t j = 0;

    // if (dstsize <= destlen)
    //     return dstsize + srclen;

    // while (src[j] && i < dstsize - 1)
    // {
    //     dst[i] = src[j];
    //     i++;
    //     j++;
    // }

    // dst[i] = '\0';
    
    // return destlen + srclen;
}
