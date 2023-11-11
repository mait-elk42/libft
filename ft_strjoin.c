/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:10:30 by mait-elk          #+#    #+#             */
/*   Updated: 2023/11/11 20:04:41 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*res;

	res = 0;
	len = ft_strlen(s1);
	len += ft_strlen(s2);
	res = malloc(len + 1);
	len = 0;
	if (!res)
		return (0);
	if (s1)
		while (*s1)
			res[len++] = *s1++;
	if (s2)
		while (*s2)
			res[len++] = *s2++;
	res[len] = '\0';
	return (res);
}
