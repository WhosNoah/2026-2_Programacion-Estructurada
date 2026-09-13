#include <stdio.h>
#include "funciones.h"

int main(void) {
    int inicio = 1970, fin = 2053;

    printf("Rango analizado: %d a %d\n", inicio, fin);
    mayorEspacio(inicio, fin);

    return 0;
}