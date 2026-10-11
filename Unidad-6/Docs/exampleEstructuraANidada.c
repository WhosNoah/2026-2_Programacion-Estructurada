typedef struct _Domicilio
{
    char calle[20];
    int numero;
    int cp;
} Domicilio;

typedef struct _Empleado
{
    char nombre[20];
    char departamento[30];
    float sueldo;
    Domicilio direccion;
} Empleado;

// Una estructura anonima se veria asi.
// Es equivalente que el anterior
/*
typedef struct _Empleado
{
    char nombre[20];
    char departamento[30];
    float sueldo;
    struct {
        char calle[26];
        int numero;
        int cp;
    } Domicilio;
    };
*/

// Aplicacion:
Empleado a1;
a1.direccion.cp = 123;

// Con apuntador:
typedef struct _Domicilio
{
    char calle[20];
    int numero;
    int cp;
} Domicilio;

typedef struct _Empleado
{
    char nombre[20];
    char departamento[30];
    float sueldo;
    Domicilio *direccion;
} Empleado;

Empleado a1;
a1.direccion->cp = 123;

// Si a1 fuera apuntador.
Empleado a1;
a1->direccion.cp = 123;
