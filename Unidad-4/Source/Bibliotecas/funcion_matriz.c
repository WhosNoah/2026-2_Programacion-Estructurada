#include "funcion_matriz.h"
#include <stdio.h>

void llenear_matriz(int n, int matriz[n][n]) {
    for ( int i = 0; i < n; i++ ) {
        for ( int j = 0; j < n; j++ ) {
            printf("%d", matriz[i][j]);
        }
    }
}

void imprimir_matriz(int n, int matriz[n][n]) {
    int arriba;
    int abajo = arriba - 1;
    int izquierda;
    int derecha = izquierda - 1;
}
