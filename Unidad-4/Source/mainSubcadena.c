#include <stdio.h>
#include "Bibliotecas/subcadena.h"

int main(void) {
    char texto[1000];
    char subtexto[1000];

    scanf("%s", &texto);
    scanf("%s", &subtexto);

    int lenTexto = calcularLongitud(texto);
    int lenSubtexto = calcularLongitud(subtexto);

    int repeticiones = contarSubcadena(texto, subtexto, lenTexto, lenSubtexto);

    printf("%d\n", repeticiones);

    return 0;
}