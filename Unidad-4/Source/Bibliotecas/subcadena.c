#include "subcadena.h"

int calcularLongitud(const char *cadena) {
    int longitud = 0;
    while ( cadena[longitud] != '\0' ) {
        longitud++;
    }
    return longitud;
}

int contarSubcadena(const char *texto, const char *subtexto, int lenTexto, int lenSubtexto) {    
    if ( lenSubtexto == 0 || lenSubtexto > lenTexto ) {
        return 0;
    }
    int contador = 0;
    for ( int i = 0; i <= lenTexto-lenSubtexto; i++  ) {
        int coincidencia = 1;
        for ( int j = 0; j < lenSubtexto; j++ ) {
            if ( texto[i + j] != subtexto[j] ) {
                coincidencia = 0;
                break;
            }
        }
        if ( coincidencia ) {
            contador++;
        }
    }
    return contador;
}