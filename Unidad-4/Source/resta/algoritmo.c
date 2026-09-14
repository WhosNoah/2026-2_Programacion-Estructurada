#include "algoritmo.h"

int algoritmo(int n, int rep) {
    for ( int i = 0; i < rep; i++ ) {
        n % 10 == 0 ? n /= 10 : n--;
    }
    return n;
}