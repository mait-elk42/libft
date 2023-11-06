/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:57:42 by mait-elk          #+#    #+#             */
/*   Updated: 2023/11/05 18:58:09 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int _nsx_intlen(int n)
{
    int r;

    r = 0;
    while(n)
    {
        r++;
        n /= 10;
    }
    return r;
}
static char* _nsx_numballoc(int n, int len,int is_negative)
{
    char *res;

    if(is_negative)
        len++;
    res = malloc(len + 1);
    if(!res)
        return (0);
    if(is_negative)
    {
        n *= -1;
        res[0] = '-';
    }
    res[len] = '\0';
    while (len)
    {
        if(len == 1 && is_negative)
            break;
        res[len-1] = (n % 10) + 48;
        n /= 10;
        len--;
    }
    return (res);
    
}
static char *_nsx_allocstr(int len,char *s)
{
	int i;
	char *res;

	i = 0;
	res = malloc(len + 1);
	if(!res)
		return (0);
	while(i < len)
	{
		res[i] = *s;
		i++;
		s++;
	}
	res[i] = '\0';
	return (res);
}
char *ft_itoa(int n)
{
    char *res;

    if(n == 0)
    {
        res = _nsx_allocstr(1,"0");
        return (res);
    }
    if(n == -2147483648)
    {
        res = _nsx_allocstr(11, "-2147483648");
        return (res);
    }
    res = _nsx_numballoc(n,_nsx_intlen(n),n < 0);
    return (res);
}
