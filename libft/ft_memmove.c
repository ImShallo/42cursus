/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:51:09 by cstate            #+#    #+#             */
/*   Updated: 2024/11/20 17:17:07 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
	<<ft_memmove>> copies <[length]> bytes from memory area <[src]> to memory area <[dst]>.
	The function reproduces the characters correctly at <[dst]> even if the two areas overlap.
*/
void	*ft_memmove(void *dst, const void *src, size_t length)
{
	const char	*ptr_src;
	char		*ptr_dst;
	size_t	i;

	ptr_src = (char *) src;
	ptr_dst = (char *) dst;
    if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		i = length;
		while (i-- > 0)
			ptr_dst[i] = ptr_src[i];
	}
	else
	{
		i = 0;
		while (i < length)
		{
			ptr_dst[i] = ptr_src[i];
			i++;
		}
	}
	return (dst);
}

// int	main(void)
// {
//     char src[50] = "Questa funzione l'ho fatta prima di ft_memcpy.c";
//     char dst[50] = "Ed e' stata una pessima scelta";

//     printf("src[]: %s\n", src);
//     printf("dst[]: %s\n", dst);
//     ft_memmove(dst, src, strlen(src) + 1);
//     printf("dopo memmove\n");
// 	printf("src[]: %s\n", src);
//     printf("dst[]: %s\n", dst);

//     return 0;
// }