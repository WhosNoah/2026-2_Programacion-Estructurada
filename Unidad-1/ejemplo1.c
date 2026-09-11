#include <stdio.h>

int main(void)
{
    char caracter = 'a';
    char* texto = "Alejandro";
    int entero = 10;
    float flot = 3.141578;
    double doble = 0.000008;

    printf("Hol%c %s \n", caracter, texto);
    printf("entero = %d \n", entero);
    printf("flotante = %f \n", flot);
    printf("doble = %lf \n", doble);

    return 0;

}