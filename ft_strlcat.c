/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:29:20 by mait-elk          #+#    #+#             */
/*   Updated: 2023/11/04 23:18:07 by mait-elk         ###   ########.fr       */
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
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	destlen;
	size_t	srclen;

	i = 0;
	j = 0;
	len = 0;
	destlen = _nsx_strlen(dst);
	srclen = _nsx_strlen(src);
	if(dstsize >  destlen)
		len = destlen + srclen;
	else
		len = srclen;
	i = 0;
	while(dst[j] && j < dstsize - 1)
		j++;
	while(src[i] && j < dstsize - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (len);
}