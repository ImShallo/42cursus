/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 20:51:37 by cstate            #+#    #+#             */
/*   Updated: 2024/11/29 19:15:00 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION
		<<ft_strdup>> allocates sufficient memory for a copy 
		of the string <<s1>>, does the copy, and returns a pointer to it.
		The pointer may subsequently be used as an argument 
		to the function <<free>>.
*/
char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	i;

	copy = malloc(sizeof(char) * ft_strlen((char *)s1) + 1);
	if (!copy)
		return (NULL);
    i = 0;
    while (s1[i])
    {
        copy[i] = s1[i];
        i++;
    }
    copy[i] = '\0';
	return (copy);
}

// int main()
// {
// 	char *ft_result;
// 	char *std_result;

// 	printf("==== TEST STRDUP ====\n");

// 	// Test 1: Stringa normale
// 	const char *test1 = "Hello, World!";
// 	ft_result = ft_strdup(test1);
// 	std_result = strdup(test1);
// 	printf("Test 1: Expected: '%s', Got: '%s'\n", std_result, ft_result);
// 	free(ft_result);
// 	free(std_result);

// 	// Test 2: Stringa vuota
// 	const char *test2 = "";
// 	ft_result = ft_strdup(test2);
// 	std_result = strdup(test2);
// 	printf("Test 2: Expected: '%s', Got: '%s'\n", std_result, ft_result);
// 	free(ft_result);
// 	free(std_result);

// 	// Test 3: Stringa con caratteri speciali
// 	const char *test3 = "\t\n\r\0ABC";
// 	ft_result = ft_strdup(test3);
// 	std_result = strdup(test3);
// 	printf("Test 3: Expected: '%s', Got: '%s'\n", std_result, ft_result);
// 	free(ft_result);
// 	free(std_result);

// 	// Test 4: Stringa lunga
// 	const char *test4 = "abcdefghijklmnopqrstuvwxyz0123456789";
// 	ft_result = ft_strdup(test4);
// 	std_result = strdup(test4);
// 	printf("Test 4: Expected: '%s', Got: '%s'\n", std_result, ft_result);
// 	free(ft_result);
// 	free(std_result);

// 	return (0);
// }
