/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:10:15 by cstate            #+#    #+#             */
/*   Updated: 2024/11/23 18:43:11 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

/*
	DESCRIPTION
		<<ft_calloc>> allocates memory for an array of <<nmemb>> elements of <<size>> bytes each.
		The memory is set to zero.
	RETURN VALUES
		The pointer to the allocated memory.
		NULL if the allocation fails.
*/
void	*ft_calloc(size_t count, size_t size)
{
	unsigned char *tmp;
	
	tmp = (unsigned char *) malloc(size * count);
	if (!tmp)
		return (NULL);
	while (count--)
		tmp[count] = 0;
	return (tmp);	
}
/* 
int main()
{
	void *ft_result;
	void *std_result;
	int is_equal;

	printf("==== TEST CALLOC ====\n");

	// Test 1: Allocazione di memoria per un array di 5 interi
	ft_result = ft_calloc(5, sizeof(int));
	std_result = calloc(5, sizeof(int));
	is_equal = memcmp(ft_result, std_result, 5 * sizeof(int)) == 0;
	printf("Test 1: Allocating 5 ints - Expected: %s, Got: %s\n", is_equal ? "Equal" : "Not Equal", is_equal ? "Equal" : "Not Equal");
	free(ft_result);
	free(std_result);

	// Test 2: Allocazione di memoria per un array di 10 char
	ft_result = ft_calloc(10, sizeof(char));
	std_result = calloc(10, sizeof(char));
	is_equal = memcmp(ft_result, std_result, 10 * sizeof(char)) == 0;
	printf("Test 2: Allocating 10 chars - Expected: %s, Got: %s\n", is_equal ? "Equal" : "Not Equal", is_equal ? "Equal" : "Not Equal");
	free(ft_result);
	free(std_result);

	// Test 3: Allocazione di memoria per un singolo elemento
	ft_result = ft_calloc(1, sizeof(float));
	std_result = calloc(1, sizeof(float));
	is_equal = memcmp(ft_result, std_result, sizeof(float)) == 0;
	printf("Test 3: Allocating 1 float - Expected: %s, Got: %s\n", is_equal ? "Equal" : "Not Equal", is_equal ? "Equal" : "Not Equal");
	free(ft_result);
	free(std_result);

	// Test 4: Allocazione di zero elementi
	ft_result = ft_calloc(0, sizeof(int));
	std_result = calloc(0, sizeof(int));
	printf("Test 4: Allocating 0 ints - Expected: NULL, Got: %s\n", (ft_result == NULL && std_result == NULL) ? "NULL" : "Not NULL");
	free(ft_result);
	free(std_result);

	// Test 5: Allocazione di un grande blocco di memoria
	ft_result = ft_calloc(10000, sizeof(double));
	std_result = calloc(10000, sizeof(double));
	is_equal = memcmp(ft_result, std_result, 10000 * sizeof(double)) == 0;
	printf("Test 5: Allocating 10,000 doubles - Expected: %s, Got: %s\n", is_equal ? "Equal" : "Not Equal", is_equal ? "Equal" : "Not Equal");
	free(ft_result);
	free(std_result);

	// Test 6: Allocazione con overflow (dimensione troppo grande)
	ft_result = ft_calloc(SIZE_MAX, 2);  // Proviamo a causare un overflow
	std_result = calloc(SIZE_MAX, 2);
	printf("Test 6: Allocating SIZE_MAX * 2 - Expected: NULL, Got: %s\n", (ft_result == NULL && std_result == NULL) ? "NULL" : "Not NULL");
	free(ft_result);
	free(std_result);

	return 0;
}
 */