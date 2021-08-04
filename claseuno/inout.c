/*
 * Programa de ejemplo con un error deliberado
 * Programacion 1 - UNRN Andina
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
    int variable;
    printf("Ingrese un numero entero: ");
    scanf("%d", &variable);
    printf("Hola mundo. %d \n", variable);
    return 0;
}
