#include "operaciones.h"

double suma(double a, double b) {
    double res = 0;
    res = a+b;

    return res;
    
}

double resta(double a, double b) {
    double res = 0;
    res = a-b;

    return res;
}

double multiplicacion(double a, double b) {
    double res = 0;
    res = a*b;

    return res;
}

double division(double a, double b) {
    double res = 0;
    if ( b == 0 ) {
        printf("B no puede ser igual a 0");
    } else {
        res = a/b;
    }
    
    return res;
}