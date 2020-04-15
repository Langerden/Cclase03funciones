#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ESPACIO 30

char pedirNombreInicialMayus (char mensaje [], char datoUsuario [ESPACIO]);

int main()
{
char primerNombre [ESPACIO];
char segundoNombre [ESPACIO];
char primerApellido [ESPACIO];
char segundoApellido [ESPACIO];


primerNombre[ESPACIO] = pedirNombreInicialMayus("Ingrese su primer nombre: ", primerNombre);
segundoNombre[ESPACIO] = pedirNombreInicialMayus("Ingrese su segundo nombre: ", segundoNombre);
primerApellido [ESPACIO] = pedirNombreInicialMayus("Ingrese su primer apellido: ", primerApellido);
segundoApellido [ESPACIO] = pedirNombreInicialMayus("Ingrese su segundo apellido: ", segundoApellido);

strcat(primerNombre, " ");
strcat(primerNombre, segundoNombre);
strcat(segundoApellido, ", ");
strcat(primerApellido, " ");
strcat(primerApellido, segundoApellido);
strcat(primerApellido, primerNombre);

puts(primerApellido);
return 0;
}

char pedirNombreInicialMayus (char mensaje [], char datoUsuario [ESPACIO])
{
    printf("%s", mensaje);
    gets(datoUsuario);
    strlwr(datoUsuario);
    datoUsuario[0] = toupper(datoUsuario[0]);
    return datoUsuario[ESPACIO];
}
