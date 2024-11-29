/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:19:24 by cstate            #+#    #+#             */
/*   Updated: 2024/11/29 12:30:55 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
	DESCRIPTION
		<<ft_strncmp>> compares the first <length> characters 
		of the strings <s1> and <s2>.
	RETURN VALUES
		If <s1> sorts  after <s2>, the function returns a positive number.
		If <s1> sorts  before <s2>, the function returns a negative number.
		If the strings are equivalent, the function returns 0.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t length)
{
	size_t	i;

	i = 0;
	while (i < length)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*
int main()
{
    char str1[] = "CiaoA!";
    char str2[] = "CiaoB!";

    printf("Confronto tra '%s' e '%s': %d\n", str1, str2, \
	ft_strncmp(str1, str2, strlen(str1)));

    return 0;
}
*/