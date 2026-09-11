#include <stdio.h>
#include <stdlib.h>
#include "convertidor.h"

int main(int argc, char **argv) {

    if (argc < 2) {
        printf("Uso: %s <temperatura>\n", argv[0]);
        return 1;
    }

    float c = atof(argv[1]);
    float f = celsiusAFahrenheit(c);

    printf("%.3f F\n", f);

    return 0;
}