#include <stdio.h>

int main(){
    int var = 21, tama;
    int *pint;
    pint = &var;
    printf("Hola mundo\n");
    printf("El contenido del puntero es: %d\n", *pint);
    printf("La direccion de memoria almacenada en el puntero es: %p\n", pint);
    printf("La direccion de memoria de la variable es: %p\n", &var);
    printf("La direccion de memoria del puntero es: %p\n", &pint);
    printf("El tamano de memoria utilizado por la variable es: %zu bytes\n", sizeof(int));
    return 0;
}