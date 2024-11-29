/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:43:19 by cstate            #+#    #+#             */
/*   Updated: 2024/11/29 14:13:19 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	<<ft_memcpy>> copies <[length]> bytes from memory area <[src]> 
	to memory area <[dst]>.
	If the two areas overlap, the behavior is undefined.
*/
void	*ft_memcpy(void *dst, const void *src, size_t length)
{
	size_t		i;
	const char	*ptr_src;
	char		*ptr_dst;

	ptr_src = (char *) src;
	ptr_dst = (char *) dst;
	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < length)
	{
		ptr_dst[i] = ptr_src[i];
		i++;
	}
	return (dst);
}

// int	main(void)
// {
//     char src[50] = "Questa funzione l'ho fatta dopo ft_memmove.c";
//     char dst[50] = "Ed e' stata un ottima scelta";

//     printf("src[]: %s\n", src);
//     printf("dst[]: %s\n", dst);
//     ft_memcpy(dst, src, strlen(src) + 1);
//     printf("dopo memcpy\n");
// 	printf("src[]: %s\n", src);
//     printf("dst[]: %s\n", dst);

//     return 0;
// }
