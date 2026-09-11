#include <stdio.h>
#include <math.h>


int main(void) {
    float val1, val2, val3;
    float s = 0;
    float area = 0;
    
    printf("Ingrese su primer valor: ");
    scanf("%f", &val1);
    printf("Ingrese su segundo valor: ");
    scanf("%f", &val2);
    printf("Ingrese su tercer valor: ");
    scanf("%f", &val3);

    if ( val1+val2 > val3 && val2+val3 > val1 && val3+val1 > val2) {
            s = (val1+val2+val3)/2;
            area = sqrt(s*(s-val1)*(s-val2)*(s-val3));
            printf("Área es: %.4f\n", area);

    } else {
        printf("El triángulo no es válido\n");
    }

    printf("gcc triangulo.c -std=c99 -o triangulo -lm\n");
    return 0;
}