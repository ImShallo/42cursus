/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:43:13 by cstate            #+#    #+#             */
/*   Updated: 2024/11/29 11:54:40 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
	DESCRIPTION
		<<ft_memchr>> searches memory starting at <<[src]>> for the character <<[c]>>.
		The search ends after with the first occurrence of <<[c]>> or after <<[length]>> bytes.
	RETURN VALUES
		A pointer to the character <<[c]>>, or NULL if the character is not found.
*/
void	*ft_memchr(const void *src, int c, size_t length)
{
	size_t          i;
	unsigned char   *ptr_str;
    unsigned char   character;

	i = 0;
	ptr_str = (unsigned char *) src;
	character = (unsigned char) c;
    while (i < length)
	{
		if (ptr_str[i] == character)
			return ((void *)(ptr_str + i));
		i++;
	}
	return (NULL);
}

/*
int main(void)
{
    printf("==== TEST MEMCHR ====\n");

    // Caso base: carattere presente
    char str1[] = "hello world";
    printf("Test 1: Expected: %p, Got: %p\n", memchr(str1, 'o', 11), ft_memchr(str1, 'o', 11));

    // Caso limite: carattere non presente
    printf("Test 2: Expected: %p, Got: %p\n", memchr(str1, 'x', 11), ft_memchr(str1, 'x', 11));

    // Caso limite: lunghezza zero
    printf("Test 3: Expected: %p, Got: %p\n", memchr(str1, 'o', 0), ft_memchr(str1, 'o', 0));

    // Caso limite: lunghezza inferiore al primo match
    printf("Test 4: Expected: %p, Got: %p\n", memchr(str1, 'o', 4), ft_memchr(str1, 'o', 4));

    // Caso con carattere all'inizio
    printf("Test 5: Expected: %p, Got: %p\n", memchr(str1, 'h', 11), ft_memchr(str1, 'h', 11));

    // Caso con carattere alla fine
    printf("Test 6: Expected: %p, Got: %p\n", memchr(str1, 'd', 11), ft_memchr(str1, 'd', 11));

    // Caso con stringa vuota
    char str2[] = "";
    printf("Test 7: Expected: %p, Got: %p\n", memchr(str2, 'a', 5), ft_memchr(str2, 'a', 5));

    // Caso con carattere nullo ('\0') presente
    char str3[] = "abc\0def";
    printf("Test 8: Expected: %p, Got: %p\n", memchr(str3, '\0', 7), ft_memchr(str3, '\0', 7));

    // Caso con memoria binaria
    unsigned char binary[] = {0x01, 0x02, 0x03, 0x04, 0x05};
    printf("Test 9: Expected: %p, Got: %p\n", memchr(binary, 0x03, 5), ft_memchr(binary, 0x03, 5));

    // Caso limite: carattere non presente nella memoria binaria
    printf("Test 10: Expected: %p, Got: %p\n", memchr(binary, 0x06, 5), ft_memchr(binary, 0x06, 5));

    // Caso limite: lunghezza maggiore della stringa
    printf("Test 11: Expected: %p, Got: %p\n", memchr(str1, 'o', 20), ft_memchr(str1, 'o', 20));

	return (0);
}
*/