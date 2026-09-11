#include <stdio.h>
#include "operaciones.h"

int main() {
    double a, b;
    int opcion;

    printf("*-------------------*\n");
    printf("|1.- Suma           |\n");
    printf("|2.- Resta          |\n");
    printf("|3.- Multiplicación |\n");
    printf("|4.- División       |\n");
    printf("|___________________/\n");

    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            double resSuma = 0;
            printf("Ingrese un valor a: ");
            scanf("%lf", &a);
            printf("Ingrese un valor b: ");
            scanf("%lf", &b);
            resSuma = suma(a, b);
            printf("El resultado es: %lf\n", resSuma);
            break;

        case 2:
            double resResta = 0;
            printf("Ingrese un valor a: ");
            scanf("%lf", &a);
            printf("Ingrese un valor b: ");
            scanf("%lf", &b);
            resResta = resta(a, b);
            printf("El resultado es: %lf\n", resResta);
            break;

        case 3:
            double resMult = 0;
            printf("Ingrese un valor a: ");
            scanf("%lf", &a);
            printf("Ingrese un valor b: ");
            scanf("%lf", &b);
            resMult = multiplicacion(a, b);
            printf("El resultado es: %lf\n", resMult);
            break;

        case 4:
            double resDivision = 0;
            printf("Ingrese un valor a: ");
            scanf("%lf", &a);
            printf("Ingrese un valor b: ");
            scanf("%lf", &b);
            resDivision = division(a, b);
            printf("El resultado es: %lf\n", resDivision);
            break;
        
        default:
            printf("Ingrese una opcion valida\n.")
            break;
    }

    return 0;
}