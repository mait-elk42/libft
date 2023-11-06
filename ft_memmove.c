/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:10:54 by mait-elk          #+#    #+#             */
/*   Updated: 2023/11/04 22:58:13 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*_nsx_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*_dst;
	char	*_src;

	_dst = (char *)dst;
	_src = (char *)src;
	i = 0;
	while (i < n)
	{
		_dst[i] = _src[i];
		i++;
	}
	return (_dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	char	*_dst;
	char	*_src;

	if (!dst && !src)
		return (0);
	_dst = (char *)dst;
	_src = (char *)src;
	i = 0;
	if (dst > src)
	{
		while (len--)
		{
			_dst[len] = _src[len];
		}
	}
	else
	{
		_dst = _nsx_memcpy(dst, src, len);
	}
	return (_dst);
}
