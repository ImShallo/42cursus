/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:52:52 by cstate            #+#    #+#             */
/*   Updated: 2024/11/23 15:56:17 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION
		<<ft_putnbr_fd>> writes the integer <<n>> to the given file descriptor <<fd>>.
*/

void	ft_putnbr(int nb, int fd)
{
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = ~nb + 1;
		write(fd, "-", 1);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10, fd);
		ft_putnbr(nb % 10, fd);
	}
	else
	{
		nb += 48;
		write(fd, &nb, 1);
	}
}

int	main(void)
{
	ft_putnbr(42, 1);
	printf("\n");
	ft_putnbr(-42, 1);
	printf("\n");
	ft_putnbr(0, 1);
	printf("\n");
	ft_putnbr(2147483647, 1);
	printf("\n");
	ft_putnbr(-2147483648, 1);
	printf("\n");

	return (0);
}