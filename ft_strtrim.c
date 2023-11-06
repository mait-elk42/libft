/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:20:33 by mait-elk          #+#    #+#             */
/*   Updated: 2023/11/05 18:06:13 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t _nsx_lenofstr(const char *s)
{
	size_t l;

	l = 0;
	if(s)
	while(s[l]) l++;
	return (l);
}

static int _nsx_isset(char c,const char *list)
{
	while(*list)
		if(*list == c)
			return (1);
		else
			list++;
	return (0);
}

static char	*_nsx_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	i = 0;
	res = malloc (len + 1);
	if (!res)
		return (0);
	if (start <= 0)
		return (0);
	s += (start - 1);
	while (s[i] && len)
	{
		res[i] = s[i];
		i++;
		len--;
	}
	res[i] = '\0';
	return (res);
}


char *ft_strtrim(char const *s1, char const *set)
{
	char *res;
	size_t i;
	size_t lof_s1;

	i = 0;
	res = 0;
	lof_s1 = _nsx_lenofstr(s1);
	while(_nsx_isset(s1[i],set))
		i++;
	while(_nsx_isset(s1[lof_s1 - 1],set))
		lof_s1--;
	if(lof_s1 == 0)
		return (&((char *)s1)[i]);
	s1 = _nsx_substr(s1, i + 1 , lof_s1 - i);
	res = malloc((lof_s1 + 1 - i) + 1);
	i = 0;
	while(s1[i])
	{
		res[i] = s1[i]; 
		i++;
	}
	res[i] = '\0';
	return (res);
}
