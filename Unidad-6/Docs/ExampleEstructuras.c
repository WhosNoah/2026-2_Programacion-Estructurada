#include <stdio.h>
#include <string.h>
struct Alumno // Nombre de la estructura.
{
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    char direccion[20];
}; // Termina en punto y coma

// Una vez declarada la estructura, podemos crear variables del tipo estructura para utilizarla.

struct Alumno a1; // definir una variable de tipo Alumno

// definir e inicializar en el mismo renglon la variable tipo Alumno
struct Alumno a2 = {101, "Omar", "ISyT", 8.0, "Tijuana"};

// con apuntador
struct Alumno* a3 = &a2;


// Acceder a los campos depende si la variable es estatica o apuntador se utiliza el operador punto (.) o el operador derecha (->)

printf("Nombre A2: %s", .a2.nombre);
printf("Matricula A2: %d", .a2.matricula);
printf("Carrera A2: %s", .a2.carrera);
printf("Direccion A2: %s", .a2.direcction);

// Para darle valor a char{} se pueden copiar los caracteres
// o hacer un ciclo y espacio por espacio darle valor

strcpy(a3 -> nombre, "Omar");
    a3 -> matricula = 123123;
strcpy(a3 -> carrera, "IS");
strcpy(a3 -> direccion, "Tj");

printf("Nombre A3: %s", .a3->nombre);
printf("Matricula A3: %d", .a2->matricula);
printf("Carrera A3: %s", .a2->carrera);
printf("Direccion A3: %s", .a2->direcction);



// Se recomiendan poner despues de las macros (o variables de propiedades).

/*
 * Estructura:
 *
 * librerias / headers
 * macros / variables de propiedades
 * Estructuras
 * Definidas
 * Prototipos
 */
