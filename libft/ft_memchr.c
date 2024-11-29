/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:43:13 by cstate            #+#    #+#             */
/*   Updated: 2024/11/29 12:26:25 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
	DESCRIPTION
		<<ft_memchr>> searches memory starting at <<[src]>> 
		for the character <<[c]>>.
		The search ends after with the first occurrence of <<[c]>> 
		or after <<[length]>> bytes.
	RETURN VALUES
		A pointer to the character <<[c]>>
		NULL if the character is not found.
*/
void	*ft_memchr(const void *src, int c, size_t length)
{
	size_t			i;
	unsigned char	*ptr_str;
	unsigned char	character;

	i = 0;
	ptr_str = (unsigned char *) src;
	character = (unsigned char) c;
	while (i < length)
	{
		if (ptr_str[i] == character)
			return ((void *)(ptr_str + i));
		i++;
	}
	return (NULL);
}
