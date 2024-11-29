/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 21:37:37 by cstate            #+#    #+#             */
/*   Updated: 2024/11/29 12:28:25 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION
		<<ft_substr>> allocates and returns a substring from the string <<s>>.
		The substring begins at index <<start>> and is of maximum size <<len>>
	RETURN VALUES
		The pointer to the substring.
		NULL if the allocation fails.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (start > (unsigned) ft_strlen((char *) s))
		return (ft_strdup(""));
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = *(s + start + i);
		++i;
	}
	str[i] = '\0';
	return (str);
}
