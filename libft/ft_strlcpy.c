/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:58:42 by cstate            #+#    #+#             */
/*   Updated: 2024/11/29 12:35:00 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "bsd/string.h"

/* 
	DESCRIPTION
	   <<ft_strlcpy>> copies up to <<dstsize - 1>> characters from the string
	   <<src>> to <<dst>>, NUL-terminating the result if <<dstsize>> is not 0.
	RETURN VALUES
	   <<ft_strlcpy>> returns the total length of the string it tried to create
	   For example if <<dstsize>> is less than the length of <<src>> the return
	   value is the length of <<src>>.  This means that if the return value is
	   greater than or equal to <<dstsize>>the output string has been truncate
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen((char *) src);
	if (dstsize == 0)
		return (src_len);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

/* 
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
 */