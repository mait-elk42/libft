/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:41:11 by mait-elk          #+#    #+#             */
/*   Updated: 2023/11/06 16:03:34 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *i;
	t_list *res;

	res = malloc(sizeof(t_list));
	i = lst;
	if(!res)
		return (0);
	while (i)
	{
		res->content = f(i->content);
		i = i->next;
		if(i->next)
		{
			res->next = malloc(sizeof(t_list));
		}
	}
	return (res);
}