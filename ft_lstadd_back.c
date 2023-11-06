/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:54:17 by mait-elk          #+#    #+#             */
/*   Updated: 2023/11/06 12:16:58 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *i;
	if (!lst || !*lst)
	{
		*lst = new;
		return (void)0;
	}
	i = *lst;
	while (i->next)
		i = i->next;
	i->next = new;
}
