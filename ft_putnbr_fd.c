/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:25:29 by mait-elk          #+#    #+#             */
/*   Updated: 2023/11/05 18:45:53 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char c;
	if(n == -2147483648)
	{
		write(fd,"-2147483648",11);
		return;
	}
	if(n < 0)
		{
			n *= -1;
			c = '-';
			write(fd,&c,1);
		}
	if(n <= 9)
	{
		c = n + 48;
		write(fd,&c,1);
	}
	else
	if(n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}	
	return;
}