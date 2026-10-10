/*
Utilizando las declaraciones dadas debajo, implementar la funcion ejercicio_3 que reciba una matriz
cargada con numeros enteros, que representan las cantidades de mililitros de lluvia por hora de cada dia
del mes de noviembre.
La funcion debe mostrar por pantalla el dia y el acumulado de ese dia, de aquellos dias que superen
el promedio diario mensual.

Considerar que solo se puede recorrer una vez la matriz. Esta permitido utilizar el vector auxiliar.

Por ejemplo:

Hora --> 0  1   2   ..22    23  Acumulado x dia
        -------------------------------------------
Dia 1   |0  7   5   ..4     3   ->  51          



El resultado a mostrar seria:
    En el dia 1 han caido 51ml.
    En el dia 3 han caido 52ml.
    ..(Si hay dia entre el 2 y el 30 que superen el promedio se mostraran aqui)
    En el dia 30 han caido 45ml
*/
#include <stdio.h>
#include <stdlib.h>
#define cantDias 30
#define cantHoras 24

void ejercicio_3(int matriz[cantDias][cantHoras]){
    int acumulado[cantDias];
    int promedio = 0;
    for(int i = 0 ; i<cantDias ; i++){
        acumulado[i] = 0;
        for (int n = 0 ; n < cantHoras ; n++){
            acumulado[i] += matriz[i][n];
        }
        promedio += acumulado[i];
    }
    promedio /= cantDias;
    for (int i = 0 ; i<cantDias ; i++){
        if (acumulado[i]>promedio){
            printf("En el dia %i han caido %iml\n",i+1,acumulado[i]);
        }
    }
}

int main(){
    int matriz[cantDias][cantHoras];
    for (int i = 0; i < cantDias ; i++){
        for (int n = 0 ; n < cantHoras ; n++){
            matriz[i][n] = rand() % 10;
        }
    }
    ejercicio_3(matriz);
    return 0;
}