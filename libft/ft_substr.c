/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 21:37:37 by cstate            #+#    #+#             */
/*   Updated: 2024/11/29 11:56:07 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION
		<<ft_substr>> allocates and returns a substring from the string <<s>>.
		The substring begins at index <<start>> and is of maximum size <<len>>.
	RETURN VALUES
		The pointer to the substring.
		NULL if the allocation fails.
*/
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (start > (unsigned) ft_strlen((char *) s))
		return ft_strdup("");
	str = (char *) malloc(sizeof(char) * len + 1);
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

/*
int main()
{
	char *ft_result;

	printf("==== TEST SUBSTR ====\n");

	// Test 1: Sottostringa dentro i limiti della stringa
	ft_result = ft_substr("Hello, World!", 7, 5);
	printf("Test 1: Expected: 'World', Got: '%s'\n", ft_result);
	free(ft_result);

	// Test 2: Sottostringa con lunghezza più grande di quella disponibile
	ft_result = ft_substr("Hello, World!", 7, 20);  // Chiediamo più caratteri di quelli disponibili
	printf("Test 2: Expected: 'World!', Got: '%s'\n", ft_result);
	free(ft_result);

	// Test 3: Partenza fuori dai limiti della stringa
	ft_result = ft_substr("Hello, World!", 20, 5);  // Start troppo grande
	printf("Test 3: Expected: '', Got: '%s'\n", ft_result);
	free(ft_result);

	// Test 4: Substring vuota
	ft_result = ft_substr("Hello, World!", 7, 0);  // Lunghezza 0
	printf("Test 4: Expected: '', Got: '%s'\n", ft_result);
	free(ft_result);

	// Test 5: Stringa vuota come input
	ft_result = ft_substr("", 0, 5);  // Una stringa vuota
	printf("Test 5: Expected: '', Got: '%s'\n", ft_result);
	free(ft_result);

	// Test 6: Sottostringa che va fino alla fine
	ft_result = ft_substr("Hello, World!", 7, 100);  // Chiediamo tutto ciò che c'è dopo la posizione 7
	printf("Test 6: Expected: 'World!', Got: '%s'\n", ft_result);
	free(ft_result);

	return 0;
}
*/