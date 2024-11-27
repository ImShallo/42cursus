/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 20:16:22 by cstate            #+#    #+#             */
/*   Updated: 2024/11/25 17:42:54 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION
		<<ft_striteri>> applies the function 'f' to each character of the string 's' to
		create a new string resulting from successive applications of 'f'.
*/

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while(s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

void	func(unsigned int numb, char *c)
{
	c = c + numb;
}

int main(void)
{
	char *str = "ciao";
	ft_striteri(str, func);
	printf("%s\n", str);
	return (0);
}