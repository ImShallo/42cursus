/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 21:13:55 by cstate            #+#    #+#             */
/*   Updated: 2024/11/29 17:21:15 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digits(int nbr);

/* 
	DESCRIPTION
		<<ft_itoa>> returns a string representation of the integer argument.
		The function allocates memory for the string and returns a pointer to it.
		The string is null-terminated.
	RETURN VALUES
		The string representation of the integer argument.
		NULL if the allocation fails.
*/
char	*ft_itoa(int nbr)
{
	char	*str;
	int		digits;
	bool	is_negative;

	digits = ft_digits(nbr);
	is_negative = false;
	if (nbr < 0)
	{
		str = malloc(sizeof(char) * (digits++ + 2));
		is_negative = true;
	}
	else
		str = malloc(sizeof(char) * (digits + 1));
	str[digits - 1] = '\0';
	while (digits != 0)
	{
		if (is_negative)
			str[--digits] = (nbr % 10) * -1 + '0';
		else
			str[--digits] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}

/*
	DESCRIPTION
		<<ft_digits>> counts the number of digits in a number.
	RETURN VALUES
		The number of digits in the number.
*/
static int	ft_digits(int nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}
/* 
static void	stampaarr(char *A)
{
	int	i;

	i = 0;
	while (A[i] != '\0')
	{
		printf("A[%i] = '%c'\n", i, A[i]);
		i++;
	}
	printf("A[%i] = '\\%d'\n", i, A[i]);
} */

/*
int main()
{
	char *ft_result;

	printf("==== TEST ITOA ====\n");

	// Test 1: Numero positivo
	ft_result = ft_itoa(12345);
	printf("Test 1: Inp Expected: '12345', Got: '%s'\n", ft_result);
	free(ft_result);

	// Test 2: Numero negativo
	ft_result = ft_itoa(-54321);
	printf("Test 2: Expected: '-54321', Got: '%s'\n", ft_result);
	free(ft_result);

	// Test 3: Zero
	ft_result = ft_itoa(0);
	printf("Test 3: Expected: '0', Got: '%s'\n", ft_result);
	free(ft_result);

	// Test 4: Numero positivo piccolo
	ft_result = ft_itoa(7);
	printf("Test 4: Expected: '7', Got: '%s'\n", ft_result);
	free(ft_result);

	// Test 5: Numero negativo piccolo
	ft_result = ft_itoa(-7);
	printf("Test 5: Expected: '-7', Got: '%s'\n", ft_result);
	free(ft_result);

	// Test 6: INT_MAX
	ft_result = ft_itoa(2147483647);
	printf("Test 6: Expected: '2147483647', Got: '%s'\n", ft_result);
	free(ft_result);

	// Test 7: INT_MIN
	ft_result = ft_itoa(-2147483648);
	printf("Test 7: Expected: '-2147483648', Got: '%s'\n", ft_result);
	free(ft_result);

	// Test 8: Numero molto grande negativo
	ft_result = ft_itoa(-987654321);
	printf("Test 8: Expected: '-987654321', Got: '%s'\n", ft_result);
	free(ft_result);

	return 0;
}
*/