/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:28:04 by mait-elk          #+#    #+#             */
/*   Updated: 2023/11/07 22:28:29 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int i;
    size_t slen;
    char *str;

    slen = ft_strlen(s);
    i = 0;
    if(slen < len)
	    len = slen;
    str = malloc(len + 1);
    if (!str)
        return (0);
    if (start < slen)
    {
        while (s[start + i] && i < len)
        {
            str[i] = s[start + i];
            i++;
        }
    }

    str[i] = '\0';
    return (str);
}