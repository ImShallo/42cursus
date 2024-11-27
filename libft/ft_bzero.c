/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:46:35 by cstate            #+#    #+#             */
/*   Updated: 2024/11/18 18:29:58 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
	<<ft_bzero>> initializes <[length]> bytes of memory, 
	starting at address	<[s]>, to zero. 
*/
void	ft_bzero(void *s, size_t length)
{
	char *ptr = (char *) s;
	while (length)
	{
		*ptr = '\0';
		ptr++;
		length--;
	}
}

int main()
{
	char str[] = "Hello, World!";
	ft_bzero(str, 5);
	printf("%s\n", str);
	return 0;
}