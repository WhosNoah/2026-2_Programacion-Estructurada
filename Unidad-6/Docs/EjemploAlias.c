#include <stdio.h>
#include <string.h>

typedef int contador;
typedef struct _Alumno
{
    char nombre[20];
    int calif[5];
    contador num_calif;
}Alumno;

int main(void)
{
    Alumno a;
    strcpy(a.nombre, "omar");
    a.num_calif = 5;
    for (int i = 0; i < a.num_calif; i++)
    {
        a.num_calif[i];
    }
    return 0;
}
