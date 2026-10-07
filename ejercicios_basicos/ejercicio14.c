/*14) Escribir un programa que muestre las tablas de multiplicar desde la tabla del 1 hasta la
tabla del 9 para los primeros 100 números naturales.*/

#include <stdio.h>

int main(){
    int resultado;
    for (int i=1;i<10;i++){
        for (int n=1;n<=100;n++){
            resultado = i * n;
            printf("%i X %i = %i\n",i,n,resultado);
        }
    }
    return 0;
}