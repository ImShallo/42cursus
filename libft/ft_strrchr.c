/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 19:18:46 by cstate            #+#    #+#             */
/*   Updated: 2024/11/29 12:33:36 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
	<<ft_strrchr>> function returns a pointer to the 
	last occurrence of the character <[c]> in the string <[s]>.
	If the character <[c]> does not appear in the string <[s]>,
	 the function returns a null pointer.
*/
char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			last = (char *) s;
		s++;
	}
	return (last);
}

/*
int main()
{
	char str[] = "Hello World";
	char *ch = ft_strrchr(str, 'o');
	printf("address of first o: %p\n", (str + 4));
	printf("address of last o: %p\n", (str + 7));
	if (ch != NULL)
		printf("Character found: %p\n", ch);
	else
		printf("Character not found\n");
	return 0;
}
*/