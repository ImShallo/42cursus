/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:28:54 by cstate            #+#    #+#             */
/*   Updated: 2024/11/18 16:45:03 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>

int	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// test main for evaluators
// int main(void)
// {
// 	printf("Test 1\n");
// 	printf("ft_toupper('a') -> %c\n", ft_toupper('a'));
// 	printf("toupper('a') -> %c\n", toupper('a'));

// 	printf("\nTest 2\n");
// 	printf("ft_toupper('A') -> %c\n", ft_toupper('A'));
// 	printf("toupper('A') -> %c\n", toupper('A'));

// 	printf("\nTest 3\n");
// 	printf("ft_toupper('z') -> %c\n", ft_toupper('z'));
// 	printf("toupper('z') -> %c\n", toupper('z'));

// 	printf("\nTest 4\n");
// 	printf("ft_toupper('Z') -> %c\n", ft_toupper('Z'));
// 	printf("toupper('Z') -> %c\n", toupper('Z'));
// }