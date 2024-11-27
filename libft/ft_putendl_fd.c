/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:51:13 by cstate            #+#    #+#             */
/*   Updated: 2024/11/23 15:52:26 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
	DESCRIPTION
		<<ft_putendl_fd>> writes the string <<s>> to the given file descriptor <<fd>>,
		followed by a newline.
*/

void	ft_putendl_fd(char *s, int fd)
{
	while(*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}