#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX 1000
typedef int vector_t[MAX];

void ordenYMenorDiferencia(vector_t entrada,int ml,bool* estaOrdenadoAscendente,int* menorDiferencia){
    *menorDiferencia = abs(entrada[1]-entrada[0]);
    *estaOrdenadoAscendente = true;
    int diferencia;
    for (int i = 0 ; i < ml ; i++){
        diferencia = abs(entrada[i]-entrada[i-1]);
        if (diferencia < *menorDiferencia){
            *menorDiferencia = diferencia;
        }
        if (entrada[i]<entrada[i-1]){
            *estaOrdenadoAscendente = false;
        }
    }
}

int main(){
    vector_t array = {15,18,20,27,23,46,70};
    int diferencia;
    bool orden;
    int ml = 7;
    ordenYMenorDiferencia(array,ml,&orden,&diferencia);
    printf("Orden : %s\t Diferencia : %i\n",orden? "true" : "false",diferencia);
    return 0;
}