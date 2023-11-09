/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:20:33 by mait-elk          #+#    #+#             */
/*   Updated: 2023/11/09 23:00:44 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int _nsx_isset(char c,const char *list)
{
	while(*list)
	{
		if(*list == c)
			return (1);
		list++;
	}
	return (0);
}

size_t _nsx_getit(const char *str, int is_start, const char *set)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(str);
	if(is_start == 1)
	{
		while(_nsx_isset(str[i], set))
			i++;
		return (i);
	}
	else if(is_start == 0)
	{
		len -= 1;
		while(_nsx_isset(str[len], set))
			len--;
		return (len);
	}
	return (0);
}
char *ft_strtrim(char const *s1, char const *set)
{
	char *res;
	size_t 	start;
	size_t	end;
	size_t	i;

	i = 0;
	start = _nsx_getit(s1, 1, set);
	end = _nsx_getit(s1, 0, set);
	if(!s1[start])
		return (ft_strdup(""));
	res = malloc(end - start);
	if(!res)
		return (0);
	while(start <= end)
	{
		res[i] = s1[start];
		start++;
		i++;
	}
	res[i] = '\0';
	return (res);
}
// int main()
// {
// 	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
// 	char *s2 = "Hello \t  Please\n Trim me !";
// 	char *ret = ft_strtrim(s1, " \n\t");

// 	if (!strcmp(ret, s2))
// 		printf("%s", ret);
// 	// printf("\n?%s?", ft_strtrim("eedd", "hed"));
// }