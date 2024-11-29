/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:46:36 by cstate            #+#    #+#             */
/*   Updated: 2024/11/29 12:29:16 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
	<<ft_memset>> fills the first <[length]> bytes of the memory 
	area pointed to by <[src]> with the constant byte <[c]>.
*/
void	*ft_memset(void *src, int c, size_t length)
{
	char	*ptr;

	ptr = (char *) src;
	while (length)
	{
		*ptr = c;
		ptr++;
		length--;
	}
	return (ptr);
}

/*
int main()
{
	char str[] = "";
	char str2[] = "";
	memset(str, 'a', 1);
	printf("%s\n", str);
	ft_memset(str2, 'a', 1);
	printf("%s\n", str2);
	return 0;
}
*/