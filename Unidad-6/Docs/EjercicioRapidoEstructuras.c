#include <stdio.h>

struct Alumno
{
  char nombre[30];
  int calificaciones[5];
  float promedio;
};

void printAlumnos(struct Alumno* alumnos, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", alumnos[i].nombre);
        printf("promedio: %f\n", alumnos[i].promedio);
    }
}

int main(void)
{
    const int n = 3;
    struct Alumno alumnos[n];
    struct Alumno* alumno = 0;
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        alumno = &alumnos[i];
        float p = 0;
        printf("Nombre alumno %d: ", i + 1);
        scanf("%s", alumno->nombre);
        printf("Calificaciones del alumno: %s\n", alummno->nombre);
        for (int j = 0; j < 5; ++j)
        {
            fflush(stdin);
            printf("Calificacion %d: ", j + 1);
            scanf("%d", )
        }
    }
}
