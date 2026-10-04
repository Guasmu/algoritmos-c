#include <stdio.h>
int main(){
    int numero,suma;
    printf("Ingrese un numero natural\n");
    scanf("%i",&numero);
    suma = (numero*(numero+1))/2; 
    printf("La suma es %i\n",suma);
    return 0;
}