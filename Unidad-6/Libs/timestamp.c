#include "timestamp.h"

Fecha calcular_fecha(long long timestamp)
{
    long long z = timestamp / 86400;
    z += 719468;

    long long era = z / 146097;
    long long doe = z - era * 146097;
    long long yoe = (doe - doe / 1460 + doe / 36524 - doe / 146096) / 365;
    long long doy = doe - (365 * yoe + yoe / 4 - yoe / 100);
    long long mp = (5 * doy + 2) / 153;

    long long dia = doy - (153 * mp + 2) / 5 + 1;
    
    long long mes;
    if ( mp < 10 )
    {
        mes = mp + 3;
    } else {
        mes = mp - 9;
    }

    long long anio = yoe + era * 400 + (mes <= 2 ? 1 : 0);

    Fecha f;
    f.dia = (int)dia;
    f.mes = (int)mes;
    f.anio = (int)anio;

    return f;
}