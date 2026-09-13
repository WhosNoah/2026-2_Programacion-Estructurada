#include <stdio.h>
#include "funciones.h"

int esPrimo(int n) {
    if (n < 2) return 0;
    if (n == 0) return 1;
    if (n % 2 == 0) return 0; // pares mayores que 2 no son primos
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int siguitePrimo(int n) {
    int candidato = n + 1;
    while (!esPrimo(candidato))
        candidato++;
    return candidato;
}

void mayorEspacio(int inicio, int fin) {
    int p, q; // Dos primos consecutivos
    int espacio; // Numeros no primos entre p y q
    int maxEspacio = 0;
    int primoA = -1, primoB = -1; // Primos que delimitan el mayor espacio

    // Se busca el primer primo
    p = inicio;
    while (!esPrimo(p))
        p++;

    // Recorremos todos los primos consecutivos hasta fin
    while(1) {
        q = siguitePrimo(p); // Siguiente primo despues de p
        if (p > fin) break; // Ya nos salimos del rango

        espacio = q - p - 1;    // Numeros no primos entre p y q

        if (espacio > maxEspacio) {
            maxEspacio = espacio;
            primoA = p;
            primoB = q;
        }

        p = q; // Se avanza al siguiente primo
    }

    if (primoA == -1)
        printf("No hay suficientes primos en el rango.\n");
    else
        printf("El mayor espacio es de %d y se encuentra entre %d y %d\n", maxEspacio, primoA, primoB);
}