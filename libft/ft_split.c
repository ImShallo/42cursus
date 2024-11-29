/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:44:56 by cstate            #+#    #+#             */
/*   Updated: 2024/11/29 19:08:34 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

static unsigned int ft_count_words(char const *s, char c);
char **ft_word_alloc(char **matrix, char const *s, char c);
char *ft_strndup(const char *s, size_t n);

char *ft_strndup(const char *s, size_t n) {
    size_t len = 0;
    while (s[len] && len < n) {
        len++;
    }
    char *dup = (char *)malloc(len + 1);
    if (!dup) {
        return NULL;
    }
    for (size_t i = 0; i < len; i++) {
        dup[i] = s[i];
    }
    dup[len] = '\0';
    return dup;
}

char **ft_split(char const *s, char c) {
    int total_words;
    char **matrix;

    if (!s)
        return NULL;
    total_words = ft_count_words(s, c);
    matrix = (char **)calloc(total_words + 1, sizeof(char *));
    if (!matrix)
        return NULL;
    if (total_words != 0 && !ft_word_alloc(matrix, s, c)) {
        free(matrix);
        return NULL;
    }
    return matrix;
}

static unsigned int ft_count_words(char const *s, char c) {
    unsigned int i = 0;
    unsigned int count = 0;

    while (s[i]) {
        if (s[i] != c && (i == 0 || s[i - 1] == c))
            count++;
        i++;
    }
    return count;
}

char **ft_word_alloc(char **matrix, char const *s, char c) {
    char const *start;
    int len = 0;

    while (*s) {
        if (*s != c) {
            if (len == 0)
                start = s;
            len++;
        } else if (len > 0) {
            *matrix = ft_strndup(start, len);
            if (!*matrix)
                return NULL;
            matrix++;
            len = 0;
        }
        s++;
    }
    if (len > 0)
        *matrix = ft_strndup(start, len);
    return matrix;
}

void print_split(char **matrix) {
    if (!matrix) {
        printf("(NULL)\n");
        return;
    }
    while (*matrix) {
        printf("%s\n", *matrix);
        matrix++;
    }
}

void free_split(char **split) {
    char **temp = split;
    while (*temp) {
        free(*temp);
        temp++;
    }
    free(split);
}

int main()
{
	char **result;

	printf("==== TEST FT_SPLIT ====\n");

	// Test 1: Stringa con parole separate da un delimitatore
	result = ft_split("hello world this is a test", ' ');
	printf("Test 1: Expected: ['hello', 'world', 'is', 'a', 'test'], Got: ");
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
