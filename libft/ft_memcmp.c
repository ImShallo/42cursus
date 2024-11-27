/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:24:09 by cstate            #+#    #+#             */
/*   Updated: 2024/11/22 17:47:10 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
	DESCRIPTION
		<<ft_memcmp>> compares the first <<length>> bytes of memory at <<s1>> and <<s2>>.
	RETURN VALUES
		The function returns 0 if the memory areas are equal, 
		otherwise it returns the difference between the first two differing bytes.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t length)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (i < length)
	{
		if (str1[i] != str2[i])
			return ((unsigned char) str1[i] - (unsigned char) str2[i]);
		i++;
	}
	return (0);
}

int main()
{
    printf("==== TEST MEMCMP ====\n");

    // Test 1: Memorie uguali
    char s1[] = "abcdef";
    char s2[] = "abcdef";
    printf("Test 1: Expected: %d, Got: %d\n", memcmp(s1, s2, 6), ft_memcmp(s1, s2, 6));

    // Test 2: Differenza nel primo byte
    char s3[] = "a";
    char s4[] = "b";
    printf("Test 2: Expected: %d, Got: %d\n", memcmp(s3, s4, 1), ft_memcmp(s3, s4, 1));

    // Test 3: Differenza dopo i primi n byte
    char s5[] = "abc";
    char s6[] = "abd";
    printf("Test 3: Expected: %d, Got: %d\n", memcmp(s5, s6, 3), ft_memcmp(s5, s6, 3));

    // Test 4: Lunghezza zero
    printf("Test 4: Expected: %d, Got: %d\n", memcmp(s1, s2, 0), ft_memcmp(s1, s2, 0));

    // Test 5: Uno dei due array è vuoto
    char s7[] = "";
    printf("Test 5: Expected: %d, Got: %d\n", memcmp(s7, s2, 3), ft_memcmp(s7, s2, 3));

    // Test 6: Memorie completamente diverse
    char s8[] = "\xff\xee\xdd";
    char s9[] = "\x01\x02\x03";
    printf("Test 6: Expected: %d, Got: %d\n", memcmp(s8, s9, 3), ft_memcmp(s8, s9, 3));

    // Test 7: Memorie binarie con lunghezza inferiore alla prima differenza
    printf("Test 7: Expected: %d, Got: %d\n", memcmp(s8, s9, 2), ft_memcmp(s8, s9, 2));

    // Test 8: Memorie identiche, ma lunghezza limitata
    char s10[] = "hello world";
    char s11[] = "hello world";
    printf("Test 8: Expected: %d, Got: %d\n", memcmp(s10, s11, 5), ft_memcmp(s10, s11, 5));

    // Test 9: Caratteri speciali e differenze
    char s12[] = "abc\0def";
    char s13[] = "abc\0xyz";
    printf("Test 9: Expected: %d, Got: %d\n", memcmp(s12, s13, 7), ft_memcmp(s12, s13, 7));

    // Test 10: Memorie con differenze negative
    char s14[] = "\x7f";
    char s15[] = "\xff";
    printf("Test 10: Expected: %d, Got: %d\n", memcmp(s14, s15, 1), ft_memcmp(s14, s15, 1));

    return 0;
}

