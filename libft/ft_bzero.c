/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:46:35 by cstate            #+#    #+#             */
/*   Updated: 2024/11/29 10:49:18 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
	DESCRIPTION
		<<ft_bzero>> initializes <[length]> bytes of memory, 
		starting at address	<[s]>, to zero.
	RETURN VALUES
		None. 
*/
void	ft_bzero(void *s, size_t length)
{
	char	*ptr;

	ptr = (char *) s;
	while (length)
	{
		*ptr = '\0';
		ptr++;
		length--;
	}
}

/*
int main()
{
    char str1[20] = "Hello, World!";
    char str2[20] = "Hello, World!";
    char str3[20] = "Hello, World!";
    char str4[20] = "Hello, World!";

	printf("==== TEST FT_BZERO ====\n");

    // Test 1: Azzerare i primi 5 caratteri
    ft_bzero(str1, 5);
    printf("Test 1: Expected: '' -- Got: '%s'\n", str1);

    // Test 2: Azzerare l'intera stringa
    ft_bzero(str2, 13);
    printf("Test 2: Expected: '' -- Got: '%s'\n", str2);

    // Test 3: Azzerare 0 caratteri (nessun cambiamento)
    ft_bzero(str3, 0);
    printf("Test 3: Expected: 'Hello, World!' -- Got: '%s'\n", str3);

    // Test 4: Azzerare una stringa vuota
    char empty[1] = "";
    ft_bzero(empty, 1);
    printf("Test 4: Expected: '' -- Got: '%s'\n", empty);

    // Test 5: Azzerare una parte della stringa
    ft_bzero(str4 + 7, 6);
    printf("Test 5: Expected: 'Hello,' -- Got: '%s'\n", str4);

    return (0);
}
*/