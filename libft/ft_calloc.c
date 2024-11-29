/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:10:15 by cstate            #+#    #+#             */
/*   Updated: 2024/11/29 11:23:47 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

/*
	DESCRIPTION
		<<ft_calloc>> allocates memory for an array of 
		<<count>> elements of <<size>> bytes each.
		The memory in the allocated region is initialized to zero.
	RETURN VALUES
		The pointer to the allocated memory.
		NULL if the allocation fails.
*/
void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;

	tmp = malloc(size * count);
	if (count <= 0 || size <= 0)
		return ((char *)malloc(1));
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

    printf("==== TEST FT_CALLOC ====\n");

    // Test 1: Allocazione di memoria per un array di 5 interi
    ft_result = ft_calloc(5, sizeof(int));
    std_result = calloc(5, sizeof(int));
    printf("Test 1: Expected: '%s' -- Got: '%s'\n", 
           std_result != NULL ? "not NULL" : "NULL", 
           ft_result != NULL ? "not NULL" : "NULL");
    free(ft_result);
    free(std_result);

    // Test 2: Allocazione di memoria per un array di 10 char
    ft_result = ft_calloc(10, sizeof(char));
    std_result = calloc(10, sizeof(char));
    printf("Test 2: Expected: '%s' -- Got: '%s'\n", 
           std_result != NULL ? "not NULL" : "NULL", 
           ft_result != NULL ? "not NULL" : "NULL");
    free(ft_result);
    free(std_result);

    // Test 3: Allocazione di memoria per un singolo elemento
    ft_result = ft_calloc(1, sizeof(float));
    std_result = calloc(1, sizeof(float));
    printf("Test 3: Expected: '%s' -- Got: '%s'\n", 
           std_result != NULL ? "not NULL" : "NULL", 
           ft_result != NULL ? "not NULL" : "NULL");
    free(ft_result);
    free(std_result);

    // Test 4: Allocazione di zero elementi
    ft_result = ft_calloc(0, sizeof(int));
    std_result = calloc(0, sizeof(int));
    printf("Test 4: Expected: '%s' -- Got: '%s'\n", 
           std_result == NULL ? "NULL" : "not NULL", 
           ft_result == NULL ? "NULL" : "not NULL");
    free(ft_result);
    free(std_result);

    // Test 5: Allocazione di un grande blocco di memoria
    ft_result = ft_calloc(10000, sizeof(double));
    std_result = calloc(10000, sizeof(double));
    printf("Test 5: Expected: '%s' -- Got: '%s'\n", 
           std_result != NULL ? "not NULL" : "NULL", 
           ft_result != NULL ? "not NULL" : "NULL");
    free(ft_result);
    free(std_result);

    // Test 6: Allocazione con overflow (dimensione troppo grande)
    ft_result = ft_calloc(SIZE_MAX, 2);
    std_result = calloc(SIZE_MAX, 2);
    printf("Test 6: Expected: NULL -- Got: '%s'\n", 
           ft_result == NULL ? "NULL" : "not NULL");
    free(ft_result);
    free(std_result);

    return (0);
}
*/