#include <stdio.h>
#include "funcion.h"

void resolver(int n) {
    int libreta[10] = {0};
    int count = 0;

    for (int i = 1; i <= 10; i++) {
        long long actual = (long long)N * i;
        int temp = actual < 0 ? -actual : actual;

        if (temp == 0) {
            if (!libreta[0]) {
                libreta[0] = 1;
                count++;
            }
        }

        while (temp > 0) {
            int digito = temp % 10;
            if (!libreta[digito]) {
                libreta[digito] = 1;
                count++;
            }
            temp /= 10;
        }

        if (count == 10) {
            printf("puso atencion\n");
            return;
        }
    }

    printf("se quedo ido\n");
}
