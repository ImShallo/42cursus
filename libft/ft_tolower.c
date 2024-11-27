/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:22:54 by cstate            #+#    #+#             */
/*   Updated: 2024/11/18 16:44:56 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>

int	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// test main for evaluators
// int main(void)
// {
// 	printf("Test 1\n");
// 	printf("ft_tolower('a') -> %c\n", ft_tolower('a'));
// 	printf("tolower('a') -> %c\n", tolower('a'));

// 	printf("\nTest 2\n");
// 	printf("ft_tolower('A') -> %c\n", ft_tolower('A'));
// 	printf("tolower('A') -> %c\n", tolower('A'));

// 	printf("\nTest 3\n");
// 	printf("ft_tolower('z') -> %c\n", ft_tolower('z'));
// 	printf("tolower('z') -> %c\n", tolower('z'));

// 	printf("\nTest 4\n");
// 	printf("ft_tolower('Z') -> %c\n", ft_tolower('Z'));
// 	printf("tolower('Z') -> %c\n", tolower('Z'));
// }