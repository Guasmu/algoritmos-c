#include <stdio.h>

#define MF 1000

void ingresarValorArray(float entrada[],int valor, int posicion){
    entrada[posicion] = valor;

}


// preguntar

int main(){
    float array[MF];
    float valor;
    int posicion;
    printf("Ingrese el valor\n");
    scanf("%f",&valor);
    printf("Ingrese la posicion\n");
    scanf("%i",&posicion);
    array[posicion] = valor;
    while (valor != -1){

    }
    return 0;
}