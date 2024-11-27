/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prova.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 20:16:22 by cstate            #+#    #+#             */
/*   Updated: 2024/11/25 14:44:51 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <stdarg.h>
int count(int n);

// Funzione con numero variabile di argomenti
int somma(int count, ...) {
    va_list args;             // Dichiarazione del va_list
    va_start(args, count);    // Inizializzazione del va_list

    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += va_arg(args, int); // Estrai il prossimo argomento come int
    }

    va_end(args);             // Pulizia del va_list
    return sum;
}

int main() {

	int result;

	for(int i=0; i<10; i++)
	{
    result = somma(i, 1, 2, 3, 4, 1, 5); // Calcola la somma di 1, 2, 3 e 4
    printf("La somma è: %d\n", result);
	}

    return 0;
}

/* int count(int n)
{
	ren++;
} */