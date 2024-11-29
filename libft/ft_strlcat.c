/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:58:42 by cstate            #+#    #+#             */
/*   Updated: 2024/11/29 12:38:06 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "bsd/string.h"

/* 
	DESCRIPTION
		<<ft_strlcat>> concatenates the null-terminated string <<src>> 
		to the end of <<dst>>.
		The function will append at most <<[dstsize] - strlen(dst) - 1>> 
		characters.
	RETURN VALUES
		The function returns the total length of the string it tried to create.
		Or the length of the initial <<dst>> string + the length of <<src>>, 
		whichever is smaller.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen((char *)src);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	i = 0;
	while (src[i] && (dst_len + i < dstsize - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
