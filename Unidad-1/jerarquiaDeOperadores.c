#include <stdio.h>

int main(void) {
    int x = 3;
    int y = 4;
    int z = 5;
    int i;

    i = 2 * --x + --y + 8 - 2 + --z;

    printf("El resultado de i es: %d\n", i);

    printf("gcc -Wall -Werror -std=c99 -pedantic problema.c -o problema1\n");
    return 0;
}