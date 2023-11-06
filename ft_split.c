/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:32:55 by mait-elk          #+#    #+#             */
/*   Updated: 2023/11/04 22:19:33 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t _nsx_wordc(const char *str, char btwn)
{
    size_t i;
    size_t wc;

    wc = 0;
    i = 0;
    if(*str && *str != btwn)
        wc++;
    while(*str)
    {
        if(*str && *str == btwn)
        {
            while(*str && *str == btwn)
                str++;
            if(*str && *str != btwn)
              wc++;
        }else
        str++;
    }
    return wc;
}

void _nsx_skipc(char **s, char c)
{
	while(**s == c)
	{
		(*s)++;
	}
}

char *_nsx_newstr(char **src, size_t len)
{
	size_t i;
	char *res;

	i = 0;
	res = malloc(len + 1);
	while(i < len)
	{
		res[i] = **src;
		i++;
		(*src)++;
	}
	res[i] = '\0';
	return res;
}

char **ft_split(char const *s, char c)
{
	size_t len_word;
    size_t wordc;
    size_t w;
    char *str;
    char **res;
    
    str = (char *)s;
    w = 0;
    wordc = _nsx_wordc(s,c);
    res = malloc((wordc + 1) * sizeof(char **));
	if(!res)
		return (0);
    while (w < wordc)
    {
        _nsx_skipc(&str,c);
		len_word = 0;
        while(str[len_word] != c)
            len_word++;
		res[w] = _nsx_newstr(&str,len_word);
        w++;
    }
	res[w] = 0;
    return (res);
}
