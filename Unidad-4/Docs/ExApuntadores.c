#include <stdio.h>

void referencia(int *valor, int nuevo) {
    *valor = nuevo;
}

void copia(int valor, int nuevo) {
    valor = nuevo;
}

int main()
{

    int a = 100;
    int b[3] = {1,2,3};

    referencia(&a, 200);
    referencia(b, 200);

    printf("%d\n", a);
    printf("%d\n", b[0]);
    printf("%d\n", b[1]);
    printf("%d\n", b[2]);


    return 0;
}

/*
 * #include <stdio.h>
 * #include <stdlib.h>
 *
 * int main() {
    int *ptr = NULL; // Si lo convertimos a generico (void) se pierde toda la aritmetica.
    int a = 10;
    int b = 200;
    printf("%lu\n", sizeof(ptr));
    printf("%lu\n", sizeof(a));

    printf("dir: ptr: %p\n", &ptr);
    printf("dir: a: %p \n", &a);
    printf("dir: b: %p \n", &b);


    ptr = &a;
    *ptr = 100;
    printf("ptr -> a : %p\n", ptr);

    printf("ptr -> ? : %p\n", (ptr - 1));

    *(ptr - 1) = 150;

    printf("a: %d\n", a);
    printf("b: %d\n", b);
    int prod = *(ptr) * *(ptr-1); // Donde *(ptr) = 100 y *(ptr - 1) = 150, entonces 100 * 150 = 15000
    printf("prd: %d\n", prod);

    return 0;
}*/



/*
 * Si se pierde la aritmetica, se gana la capacidad de apuntar a
 * cualquier otra cosa. (funciones, variables, etc).
 *
 * Ejemplo:
 *  [ int prod = *(ptr) * *(ptr-1);
 *  int prod = *((int *)ptr) * *(((int *)ptr)-1);
 *  printf("prod: %d\n", prod);
 *
 * >> prod: 2000 ]
 *
 * Esto si se tiene que int *ptr es cambiado a void *ptr se castea a otro
 * tipo de dato que conozcamos el valor.
 */

