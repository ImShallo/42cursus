/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:29:53 by cstate            #+#    #+#             */
/*   Updated: 2024/11/23 18:56:12 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static bool	ft_is_in(char c, char const *set);

/*
	DESCRIPTION
		<<ft_strtrim>> allocates and returns a copy of <<s1>> with the characters 
		specified in <<set>> removed from the beginning and the end of the string.
	RETURN VALUES
		The pointer to the new  
		NULL if the allocation fails.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t 	j;
	char	*start;
	char	*end;
	char	*str;

	j = 0;
	start = (char *) s1;
	end = (char *) s1 + ft_strlen((char *) s1) - 1;
	str = (char *) malloc(sizeof(char) * (ft_strlen(start) - ft_strlen(end)) + 1);
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
/* 
int main()
{
	char *ft_result;

	printf("==== TEST STRTRIM ====\n");

	// Test 1: Rimuovere caratteri da entrambi i lati
	ft_result = ft_strtrim("  Hello, World!  ", " ");
	printf("Test 1: Expected: 'Hello, World!', Got: '%s'\n", ft_result);
	free(ft_result);

	// Test 2: Rimuovere caratteri multipli
	ft_result = ft_strtrim("--__Trim this string__--", "-_");
	printf("Test 2: Expected: 'Trim this string', Got: '%s'\n", ft_result);
	free(ft_result);

	// Test 3: Nessun carattere da rimuovere
	ft_result = ft_strtrim("No trim needed", "xyz");
	printf("Test 3: Expected: 'No trim needed', Got: '%s'\n", ft_result);
	free(ft_result);

	// Test 4: Stringa vuota
	ft_result = ft_strtrim("", " ");
	printf("Test 4: Expected: '', Got: '%s'\n", ft_result);
	free(ft_result);

	// Test 5: Set vuoto
	ft_result = ft_strtrim("No trimming here", "");
	printf("Test 5: Expected: 'No trimming here', Got: '%s'\n", ft_result);
	free(ft_result);

	// Test 6: Set NULL
	ft_result = ft_strtrim("No trimming here", NULL);
	printf("Test 6: Expected: 'No trimming here', Got: '%s'\n", ft_result);
	free(ft_result);

	// Test 7: Stringa NULL
	ft_result = ft_strtrim(NULL, " ");
	printf("Test 7: Expected: NULL, Got: '%s'\n", ft_result ? ft_result : "NULL");

	// Test 8: Entrambi NULL
	ft_result = ft_strtrim(NULL, NULL);
	printf("Test 8: Expected: NULL, Got: '%s'\n", ft_result ? ft_result : "NULL");

	// Test 9: Rimuovere tutti i caratteri
	ft_result = ft_strtrim("xxx", "x");
	printf("Test 9: Expected: '', Got: '%s'\n", ft_result);
	free(ft_result);

	// Test 10: Rimuovere caratteri speciali
	ft_result = ft_strtrim("\t\n Trim this! \t\n", "\t\n ");
	printf("Test 10: Expected: 'Trim this!', Got: '%s'\n", ft_result);
	free(ft_result);

	return 0;
}
 */