/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:12:53 by mait-elk          #+#    #+#             */
/*   Updated: 2023/11/07 23:16:31 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (n)
	{
		if (*str == (char)c)
			return (str);
		n--;
		str++;
	}
	return (0);
}
