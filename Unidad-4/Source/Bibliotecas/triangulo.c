#include "triangulo.h"

float area(float a, float b, float c) {
    float x = 0;
    float s = 0;

    s = (a+b+c)/2;
    x = sqrt(s*(s-a)*(s-b)*(s-c));

    return x;
}