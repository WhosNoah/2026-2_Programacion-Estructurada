#include "Bibliotecas/algoritmo.h"

int main(void) {
    int num, rep, res;

    scanf("%d %d", &num, &rep);
    res = algoritmo(num, rep);
    printf("%d", res);

    return 0;
}