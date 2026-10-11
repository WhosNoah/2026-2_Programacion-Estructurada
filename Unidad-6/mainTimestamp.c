#include <stdio.h>
#include "Libs/timestamp.h"

int main(void)
{
    long long timestamp;
    scanf("%lld", &timestamp);

    Fecha f = calcular_fecha(timestamp);
    printf("%02d/%02d/%02d", f.dia, f.mes, f.anio);

    return 0;
}