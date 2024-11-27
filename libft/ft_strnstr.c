/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:58:49 by cstate            #+#    #+#             */
/*   Updated: 2024/11/22 17:00:43 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == 0)
		return ((char *)(haystack));
	while (haystack[i] && i < len)
	{
		while (haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)(haystack + i));
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
/* 
int main()
{
    const char *hay = "Questo è un esemp";

    printf("Test case 1:\n");
    printf("Expected: %s\n", "esempio di stringa.");
    printf("Actual: %s\n\n", ft_strnstr(hay, "esempio", strlen(hay)));

    printf("Test case 2:\n");
    printf("Expected: %s\n", "stringa.");
    printf("Actual: %s\n\n", ft_strnstr(hay, "stringa", strlen(hay)));

    printf("Test case 3:\n");
    printf("Expected: %s\n", "(null)");
    printf("Actual: %s\n\n", ft_strnstr(hay, "non presente", strlen(hay)));

    printf("Test case 4:\n");
    printf("Expected: %s\n", hay);
    printf("Actual: %s\n\n", ft_strnstr(hay, "", strlen(hay)));

    printf("Test case 5:\n");
    printf("Expected: %s\n", hay);
    printf("Actual: %s\n\n", ft_strnstr(hay, "Q", strlen(hay)));

    printf("Test case 6:\n");
    printf("Expected: %s\n", "(null)");
    printf("Actual: %s\n\n", ft_strnstr(hay, "esempio", 5));

    return 0;
}
 */