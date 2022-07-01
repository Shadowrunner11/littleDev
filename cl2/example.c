/* example.c
Leer y mostrar un entero y un string */

#include <stdio.h>

int main(void)
{
    unsigned int miEntero;
    char unString[10];

    printf("Ingresa un numero en hexadecimal:"); 
    scanf("%x", &miEntero);
    printf("Ingresalo nuevamente");
    scanf("%s", unString);
    printf("El entero es %u y el string es %s", miEntero, unString );

    return 0;

}
