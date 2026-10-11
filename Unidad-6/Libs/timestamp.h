#pragma once
#ifndef TIMESTAMP_H
#define TIMESTAMP_H

typedef struct {
    int dia;
    int mes;
    int anio;
} Fecha;

Fecha calcular_fecha(long long timestamp);

#endif