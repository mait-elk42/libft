/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:28:04 by mait-elk          #+#    #+#             */
/*   Updated: 2023/11/05 21:02:50 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t slen;
	size_t	i;
	char	*res;

	i = 0;
	slen = 0;
	res = 0;
	while(s[slen])
		slen++;
	if (len == 0)
		return (res);
	res = malloc (len + 1);
	if (!res)
		return (res);
	s += (start);
	while (s[i] && i < len)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
