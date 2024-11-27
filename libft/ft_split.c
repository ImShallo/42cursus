/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:44:56 by cstate            #+#    #+#             */
/*   Updated: 2024/11/27 21:06:15 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int ft_count_words(char const *s, char c);
static int	ft_word_len(char *s, char c);
char **ft_word_alloc(char **matrix, char *s, char c);

char	**ft_split(char const *s, char c)
{
	int		total_words;
	char	**matrix;

	if (!s)
    	return (NULL);
	total_words = ft_count_words(s, c);
	matrix = (char **) malloc(sizeof(char *) * (total_words + 1));
	if (!matrix)
		return (NULL);
	matrix[total_words] = NULL;
	if (total_words != 0)
		ft_word_alloc(matrix, (char *)s, c);
	return (matrix);
}

static unsigned int ft_count_words(char const *s, char c)
{
	int i;
	unsigned int count;

	i = 0;
	count = 0;
	if (s[i] != c && ft_isprint(s[i]))
		count++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && ft_isprint(s[i + 1]))
			count++;
		i++;
	}
	return (count);
}

char **ft_word_alloc(char **matrix, char *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (*s)
	{
		while (*s != c && ft_isprint(*s))
		{
			len++;
			s++;
		}
		if (len != 0)
		{
			*(matrix) = (char *) malloc(sizeof(char) * len + 1);
			if (!*matrix)
				return (NULL);
			// printf("%s -- len: %d\n", (s - len), len);
			ft_strlcpy(*matrix++, (s - len), len + 1);
			len = 0;
		}
		s++;
	}
	return (matrix);
}

static int	ft_word_len(char *s, char c)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		len++;
		if (s[i++ + 1] == c)
			break;
	}
	s = (s + i + 1);
	return (len);
}

void	print_split(char **matrix)
{
	int i;
	int j;

	i = 0;
	while (matrix[i] != NULL)
	{
		j = 0;
		while(matrix[i][j] != '\0')
		{
			printf("%c", matrix[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

void	free_split(char **split)
{
	int i = 0;

	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}


int main()
{
	char **result;

	printf("==== TEST FT_SPLIT ====\n");

	// Test 1: Stringa con parole separate da un delimitatore
	result = ft_split("hello world this is a test", ' ');
	printf("Test 1: Expected: ['hello', 'world', 'this', 'is', 'a', 'test'], Got: ");
	print_split(result);
	free_split(result);

	// Test 2: Stringa con delimitatori consecutivi
	result = ft_split("one,,two,,three", ',');
	printf("Test 2: Expected: ['one', 'two', 'three'], Got: ");
	print_split(result);
	free_split(result);

	// Test 3: Delimitatore all'inizio e alla fine
	result = ft_split(",start,end,", ',');
	printf("Test 3: Expected: ['start', 'end'], Got: ");
	print_split(result);
	free_split(result);

	// Test 4: Stringa vuota
	result = ft_split("", ',');
	printf("Test 4: Expected: [], Got: ");
	print_split(result);
	free_split(result);

	// Test 5: Solo delimitatori
	result = ft_split(",,,,", ',');
	printf("Test 5: Expected: [], Got: ");
	print_split(result);
	free_split(result);

	// Test 6: Nessun delimitatore presente
	result = ft_split("nodefaultdelimiter", ',');
	printf("Test 6: Expected: ['nodefaultdelimiter'], Got: ");
	print_split(result);
	free_split(result);

	// Test 7: Stringa con un solo carattere delimitatore
	result = ft_split(",,,,,,,,", ',');
	printf("Test 7: Expected: [], Got: ");
	print_split(result);
	free_split(result);

	// Test 8: Stringa nulla
	result = ft_split(NULL, ',');
	printf("Test 8: Expected: NULL, Got: ");
	// print_split(result);

	return 0;
}