#include <stdio.h>

int main(int argc, char **argv)
{
	char *param1 = argv[1];
	char *param2 = argv[2];

	printf("Hola Mundo!\n");
	printf("%s\n%s", param1, param2);

	return 0;
}

