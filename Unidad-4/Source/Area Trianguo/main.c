#include <stdio.h>
#include "triangulo.h"

int main(void) {
    float a, b, c;
    
    printf("Ingrese sus 3 valores: ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if ( a+b > c && b+c > a && c+a > b) {
            float res = area(a, b, c);

            printf("El area es: %.4f", res);
    } else {
        printf("El triángulo no es válido\n");
    }
    return 0;
}