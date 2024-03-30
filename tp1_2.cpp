#include <stdio.h>

int cuadrado_de_nro (int nro);
void cuadrado_de_nro_void (int nro, int *cuadrado);
void mostrar_direccion_y_contenido(int num);
void invertir (int *a, int *b);
void orden (int *a, int *b);

int main(){
    int nro, resultado, a, b, cuadrado, c, d;
    printf("Ingrese un numero del cual quiera conocer su cuadrado\n");
    scanf("%d", &nro);
    resultado = cuadrado_de_nro(nro);
    printf("El cuadrado del numero ingresado con la funcion que si tiene retorno es: %d\n", resultado);
    cuadrado_de_nro_void(nro, &cuadrado);
    printf("El cuadrado del numero ingresado con la funcion que no tiene retorno es: %d\n", cuadrado);

    mostrar_direccion_y_contenido(nro);

    printf("Ingrese los valores que desea asignarle a las variables a y b (deben ser numeros enteros)\n");
    scanf("%d %d", &a, &b);
    printf("El valor de las variables antes de invertir es a = %d y b = %d\n", a, b);
    invertir (&a, &b);
    printf("El valor de las variables luego de invertir es a = %d y b = %d\n", a, b);

    printf("Ingrese los valores que desea asignarle a las variables c y d (deben ser numeros enteros)\n");
    scanf("%d %d", &c, &d);
    printf("El valor de las variables antes de usar la funcion orden es c = %d y d = %d\n", c, d);
    orden(&c, &d);
    printf("Luego de usar la funcion orden el valor de c (el numero menor) es %d y el valor de d (el numero mayor) es %d\n", c, d);

    return 0;
}

int cuadrado_de_nro (int nro){
    int res;
    res = nro*nro;
    return res;
}

void cuadrado_de_nro_void (int nro, int *cuadrado){
    *cuadrado = nro*nro;
}

void mostrar_direccion_y_contenido(int num){
    printf("La direccion de la variable nro es %p y su contenido es %d\n", &num, num);
}

void invertir (int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void orden (int *a, int *b){
    int aux;
    if ((*a)>(*b)){
        aux = *a;
        *a = *b;
        *b = aux;
    }
}