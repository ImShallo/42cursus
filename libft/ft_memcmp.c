/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:24:09 by cstate            #+#    #+#             */
/*   Updated: 2024/11/29 12:21:26 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
	DESCRIPTION
		<<ft_memcmp>> compares the first <<length>> 
        bytes of memory at <<s1>> and <<s2>>.
	RETURN VALUES
		The function returns 0 if the memory areas are equal, 
		otherwise it returns the difference between 
        the first two differing bytes.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t length)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (i < length)
	{
		if (str1[i] != str2[i])
			return ((unsigned char) str1[i] - (unsigned char) str2[i]);
		i++;
	}
	return (0);
}
