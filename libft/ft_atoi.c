/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 10:01:08 by cstate            #+#    #+#             */
/*   Updated: 2024/11/25 18:48:56 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_space(char c)
{
	return ((c >= 1 && c <= 32) || c == 127);
}

int	ft_atoi(char *str)
{
	int		number;
	short	is_minus;

	number = 0;
	is_minus = 0;
	while (*str)
	{
		if (!is_space(*str))
		{
			if (*str == '-')
				is_minus = 1;
			if (is_numeric(*str))
				number += *str - '0';
			if (is_numeric(*(str + 1)))
				number *= 10;
			else
				break ;
		}
		str++;
	}
	if (is_minus)
		number *= -1;
	return (number);
}

/* // Test main for evaluator
int	main(int argc, char *argv[])
{
	int	i;

	if (argc == 1)
		printf("Not enough arguments");
	else
	{
		i = 1;
		while (i != argc)
		{
			printf("str: '%s' \t ft_atoi: %d\n", argv[i], ft_atoi(argv[i]));
			i++;
		}
	}

	return (0);
} 
 */