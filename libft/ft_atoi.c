/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 10:01:08 by cstate            #+#    #+#             */
/*   Updated: 2024/11/29 17:11:29 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_space(char c);

/*
	DESCRIPTION
		<<ft_atoi>> converts the initial portion of the string 
		pointed to by <<[str]>> to int representation.
	RETURN VALUES
		The converted value.
*/
int	ft_atoi(char *str)
{
	int		number;
	bool	is_minus;

	number = 0;
	is_minus = false;
	while (ft_is_space(*str))
		str++;
	while (*str)
	{
		if (*str == '-')
			is_minus = !is_minus;
		else if (ft_isdigit(*str))
			number = number * 10 + *str - '0';
		else
			break ;
		str++;
	}
	if (is_minus)
		number *= -1;
	return (number);
}

static int	ft_is_space(char c)
{
	return ((c >= 7 && c <= 13) || c == 32);
}

/*
int main()
{
	int	ft_result;
	int	std_result;

	ft_result = 0;
	std_result = 0;
	printf("==== TEST FT_ATOI ====\n");

	// Test 1: Stringa con numero positivo
	ft_result = ft_atoi("12345");
	std_result = atoi("12345");
	printf("Test 1: Expected: '%d' -- Got: '%d'\n", std_result, ft_result);

	// Test 2: Stringa con numero negativo
	ft_result = ft_atoi("-12345");
	std_result = atoi("-12345");
	printf("Test 2: Expected: '%d' -- Got: '%d'\n", std_result, ft_result);

	// Test 3: Stringa con spazi
	ft_result = ft_atoi(" 12345");
	std_result = atoi(" 12345");
	printf("Test 3: Expected: '%d' -- Got: '%d'\n", std_result, ft_result);

	// Test 4: Stringa con spazi e segno
	ft_result = ft_atoi(" -12345");
	std_result = atoi(" -12345");
	printf("Test 4: Expected: '%d' -- Got: '%d'\n", std_result, ft_result);

	// Test 5: Stringa con tabulazioni, newline e segno
	ft_result = ft_atoi("\t\n -12345");
	std_result = atoi("\t\n -12345");
	printf("Test 5: Expected: '%d' -- Got: '%d'\n", std_result, ft_result);

	// Test 6: Stringa con caratteri non numerici
	ft_result = ft_atoi("	12a345");
	std_result = atoi("	12a345");
	printf("Test 6: Expected: '%d' -- Got: '%d'\n", std_result, ft_result);

	// Test 7: Stringa vuota
	ft_result = ft_atoi("");
	std_result = atoi("");
	printf("Test 7: Expected: '%d' -- Got: '%d'\n", std_result, ft_result);

	// Test 8: Stringa con solo spazi
	ft_result = ft_atoi("    ");
	std_result = atoi("    ");
	printf("Test 8: Expected: '%d' -- Got: '%d'\n", std_result, ft_result);

	// Test 9: Stringa con numero molto grande
	ft_result = ft_atoi("d469 \n");
	std_result = atoi("d469 \n");
	printf("Test 9: Expected: '%d' -- Got: '%d'\n", std_result, ft_result);

	return (0);
}
*/