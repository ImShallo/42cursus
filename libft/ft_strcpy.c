/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:53:23 by cstate            #+#    #+#             */
/*   Updated: 2024/11/29 12:23:29 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
	DESCRIPTION
		<<ft_strcpy>> copies the string pointed to by <[src]>, 
		including the terminating null byte ('\0'), 
		to the buffer pointed to by <[dst]>.
*/
char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = src[i];
	return (dst);
}

// int main(void)
// {
// 	char dst[30];
// 	char *src = "Hello, World!";

// 	ft_strcpy(dst, src);
// 	printf("dst: %s\n", dst);
// 	return 0;
// }