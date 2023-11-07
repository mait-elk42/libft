/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:28:04 by mait-elk          #+#    #+#             */
/*   Updated: 2023/11/07 20:14:22 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t mallocsize;    
	unsigned int i;
    size_t j;
    size_t slen;
    char *str;
    
	mallocsize = 0;
    slen = ft_strlen(s);
    j = 0;
    
    if (start < slen)
        s += start;
    
    // while (s[j] && j < len)
    //     j++;
	if(slen <= len)
		mallocsize = slen;
	else
		mallocsize = len;
    str = malloc(mallocsize + 1);
    
    if (!str)
        return (0);
    
    i = 0;
    
	// if(start < slen)
    while (s[i] && i < len) {
        str[i] = s[i];
        i++;
    }
    
    str[i] = '\0';
    
    return (str);
}