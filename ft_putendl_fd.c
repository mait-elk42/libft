/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:20:59 by mait-elk          #+#    #+#             */
/*   Updated: 2023/11/05 18:21:29 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	_nsx_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

void ft_putendl_fd(char *s, int fd)
{
	while (*s)
	{
		_nsx_putchar_fd(*s,fd);
		s++;
	}
	_nsx_putchar_fd('\n',fd);
}
