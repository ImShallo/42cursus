/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:29:53 by cstate            #+#    #+#             */
/*   Updated: 2024/11/29 15:55:17 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static bool	ft_is_in(char c, char const *set);

/*
	DESCRIPTION
		<<ft_strtrim>> allocates and returns a copy of <<s1>>
		with the characters specified in <<set>> removed
		from the beginning and the end of the string.
	RETURN VALUES
		The pointer to the new
		NULL if the allocation fails.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	j;
	char	*start;
	char	*end;
	char	*str;

	j = 0;
	start = (char *) s1;
	end = (char *) s1 + ft_strlen((char *) s1) - 1;
	str = malloc(sizeof(char) * (ft_strlen(start) - ft_strlen(end)) + 1);
	if (!str)
		return (NULL);
	if (ft_strlen((char *) s1) == 0)
		return (ft_strdup(""));
	while (ft_is_in(*start, set))
		start++;
	while (ft_is_in(*end, set))
		end--;
	while (start != end + 1)
	{
		str[j] = *start;
		start++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

static bool	ft_is_in(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (true);
		i++;
	}
	return (false);
}
