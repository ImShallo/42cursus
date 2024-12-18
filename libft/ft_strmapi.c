/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 20:16:22 by cstate            #+#    #+#             */
/*   Updated: 2024/11/29 17:19:38 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION
		Applies the function 'f' to each character of the string 's' to 
		create a new string resulting from successive applications of 'f'.
	RETURN VALUES
		The string created from the successive applications of 'f'.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * ft_strlen((char *) s) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
int main(void)
{
	printf("%s\n", ft_strmapi("ciao", func));

	return (0);
}
*/