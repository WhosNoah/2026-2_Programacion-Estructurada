#include <stdio.h>

int main(void) {
    int opcion;
    double a;
    double b;

    printf("*-------------------*\n");
    printf("|1.- Suma           |\n");
    printf("|2.- Resta          |\n");
    printf("|3.- Multiplicación |\n");
    printf("|4.- División       |\n");
    printf("|___________________/\n");
    printf("Seleccione su opcion: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            double resSuma = 0;
            printf("Escanee su primer numero: ");
            scanf("%lf", &a);
            printf("Escanee su segundo numero: ");
            scanf("%lf", &b);
            resSuma = a+b; 
            printf("El resultado es: %.3lf\n", resSuma);
            break;
        case 2:
            double resResta = 0;
            printf("Escanee su primer numero: ");
            scanf("%lf", &a);
            printf("Escanee su segundo numero: ");
            scanf("%lf", &b);
            resResta = a-b; 
            printf("El resultado es: %.3lf\n", resResta);
            break;
        case 3:
            double resMult = 0;
            printf("Escanee su primer numero: ");
            scanf("%lf", &a);
            printf("Escanee su segundo numero: ");
            scanf("%lf", &b);
            resMult = a*b; 
            printf("El resultado es: %.3lf\n", resMult);
            break;
        case 4:
            double resDiv = 0;
            printf("Escanee su primer numero: ");
            scanf("%lf", &a);
            printf("Escanee su segundo numero: ");
            scanf("%lf", &b);
            if ( b == 0 ) {
                printf("No se puede dividir entre 0.\n");
                break;
            }
            resDiv = a/b; 
            printf("El resultado es: %.3lf\n", resDiv);
            break;
        default:
            printf("Opcion invalida.");
            break;
    }

    return 0;
}