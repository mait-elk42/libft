/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:04:10 by mait-elk          #+#    #+#             */
/*   Updated: 2023/11/05 21:36:14 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*_s1;
	char	*_s2;

	_s1 = (char *)s1;
	_s2 = (char *)s2;
	i = 0;
	while ((_s1[i] || _s2[i]) && n)
	{
		if (_s1[i] != _s2[i])
		{
			if ((unsigned char)(_s1[i]) > (unsigned char)(_s2[i]))
			{
				return (1);
			}
			if ((unsigned char)(_s1[i]) < (unsigned char)(_s2[i]))
			{
				return (-1);
			}
		}
		i++;
        n--;
    }
	return (0);
}
