/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:38:44 by cstate            #+#    #+#             */
/*   Updated: 2024/11/23 15:45:54 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION
		<<ft_putchar_fd>> writes the character <<c>> to the given file descriptor <<fd>>.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}