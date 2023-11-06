/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:58:34 by mait-elk          #+#    #+#             */
/*   Updated: 2023/11/05 18:04:50 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*gotit;

	gotit = 0;
	while (*s)
	{
		if (*s == c)
			gotit = (char *)s;
		s++;
	}
	if(*s == c)
		return ((char *)s);
	return (gotit);
}
