/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:58:42 by cstate            #+#    #+#             */
/*   Updated: 2024/11/22 20:14:29 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "bsd/string.h"

/* 
	DESCRIPTION
		<<ft_strlcat>> concatenates the null-terminated string <<src>> to the end of <<dst>>.
		The function will append at most <<[dstsize] - strlen(dst) - 1>> characters.
	RETURN VALUES
		The function returns the total length of the string it tried to create.
		Or the length of the initial <<dst>> string + the length of <<src>>, whichever is smaller.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len = ft_strlen(dst);
	size_t	src_len = ft_strlen((char *)src);
	size_t	i;

	if (dstsize <= dst_len)
		return (dstsize + src_len);
	i = 0;
	while (src[i] && (dst_len + i < dstsize - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';

	return (dst_len + src_len);
}

int main()
{
    char ft_buffer[50];
    char std_buffer[50];
    size_t result_ft, result_std;

    printf("==== TEST STRLCAT ====\n");

    // Test 1: Concatenazione normale
    strcpy(ft_buffer, "Hello");
    strcpy(std_buffer, "Hello");
    result_ft = ft_strlcat(ft_buffer, " World", sizeof(ft_buffer));
    result_std = strlcat(std_buffer, " World", sizeof(std_buffer));
    printf("Test 1: Expected: %zu, Got: %zu, Result: '%s' (ft) vs '%s' (std)\n",
           result_std, result_ft, ft_buffer, std_buffer);

    // Test 2: Concatenazione con spazio insufficiente
    strcpy(ft_buffer, "Hello");
    strcpy(std_buffer, "Hello");
    result_ft = ft_strlcat(ft_buffer, " World", 10);
    result_std = strlcat(std_buffer, " World", 10);
    printf("Test 2: Expected: %zu, Got: %zu, Result: '%s' (ft) vs '%s' (std)\n",
           result_std, result_ft, ft_buffer, std_buffer);

    // Test 3: Concatenazione con buffer pieno
    strcpy(ft_buffer, "123456789");
    strcpy(std_buffer, "123456789");
    result_ft = ft_strlcat(ft_buffer, "X", 10);
    result_std = strlcat(std_buffer, "X", 10);
    printf("Test 3: Expected: %zu, Got: %zu, Result: '%s' (ft) vs '%s' (std)\n",
           result_std, result_ft, ft_buffer, std_buffer);

    // Test 4: src vuoto
    strcpy(ft_buffer, "Hello");
    strcpy(std_buffer, "Hello");
    result_ft = ft_strlcat(ft_buffer, "", sizeof(ft_buffer));
    result_std = strlcat(std_buffer, "", sizeof(std_buffer));
    printf("Test 4: Expected: %zu, Got: %zu, Result: '%s' (ft) vs '%s' (std)\n",
           result_std, result_ft, ft_buffer, std_buffer);

    // Test 5: dst vuoto
    strcpy(ft_buffer, "");
    strcpy(std_buffer, "");
    result_ft = ft_strlcat(ft_buffer, "Hello", sizeof(ft_buffer));
    result_std = strlcat(std_buffer, "Hello", sizeof(std_buffer));
    printf("Test 5: Expected: %zu, Got: %zu, Result: '%s' (ft) vs '%s' (std)\n",
           result_std, result_ft, ft_buffer, std_buffer);

    // Test 6: dstsize = 0
    strcpy(ft_buffer, "Hello");
    strcpy(std_buffer, "Hello");
    result_ft = ft_strlcat(ft_buffer, " World", 0);
    result_std = strlcat(std_buffer, " World", 0);
    printf("Test 6: Expected: %zu, Got: %zu, Result: '%s' (ft) vs '%s' (std)\n",
           result_std, result_ft, ft_buffer, std_buffer);

    // Test 7: dstsize troppo piccolo rispetto a dst
    strcpy(ft_buffer, "LongerString");
    strcpy(std_buffer, "LongerString");
    result_ft = ft_strlcat(ft_buffer, "Add", 5);
    result_std = strlcat(std_buffer, "Add", 5);
    printf("Test 7: Expected: %zu, Got: %zu, Result: '%s' (ft) vs '%s' (std)\n",
           result_std, result_ft, ft_buffer, std_buffer);

    return 0;
}
