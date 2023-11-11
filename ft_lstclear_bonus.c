/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:31:35 by mait-elk          #+#    #+#             */
/*   Updated: 2023/11/11 17:57:14 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*i;

	i = *(lst);
	if (!lst || !del)
		return ;
	while (i)
	{
		i = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = i;
	}
}
