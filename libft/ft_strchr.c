/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 19:18:46 by cstate            #+#    #+#             */
/*   Updated: 2024/11/29 12:36:36 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
	<<ft_strchr>> function returns a pointer to the 
	first occurrence of the character c in the string s. 
	Otherwise, if the character c does not appear in the string s, 
	the function returns a null pointer.
*/
char	*ft_strchr(const char *s, int c)
{
	if (c == '\0')
		return ((char *)(s + ft_strlen((char *) s)));
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	return (NULL);
}

// int main()
// {
// 	char str[] = "Hello, World!";
// 	char *ch = ft_strchr(str, '-');
// 	if (ch != NULL)
// 		printf("Character found: %c\n", *ch);
// 	else
// 		printf("Character not found\n");
// 	return 0;
// }