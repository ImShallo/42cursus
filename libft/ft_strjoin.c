/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:23:18 by cstate            #+#    #+#             */
/*   Updated: 2024/11/23 18:57:11 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION
		<<ft_strjoin>> allocates and returns a new string, which is the result of the concatenation
		of <<s1>> and <<s2>>.
	RETURN VALUES
		The new string.
		NULL if the allocation fails.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t			i;
	size_t			size_s1;
	size_t			size_s2;
	char	*str;
	
	i = 0;
	size_s1 = ft_strlen((char *) s1);
	size_s2 = ft_strlen((char *) s2);
	str = (char *) malloc(sizeof(char) * (size_s1 + size_s2) + 1);
	if (!str)
		return (NULL);
	while (i < size_s1)
	{
		str[i] = s1[i];
		++i;
	}
	while (i < size_s1 + size_s2)
	{
		str[i] = s2[i - size_s2];
		++i;
	}
	str[i] = '\0';
	return (str);
}