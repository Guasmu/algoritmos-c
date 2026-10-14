#include <stdio.h>
#include <stdlib.h>
#define cantfilas 4
#define cantcols 3

typedef int Tmatriz[cantfilas][cantcols];

void frecuenciaMenorNumero(Tmatriz entrada,int maximoLogicoFilas,int maximoLogicoCols,int* numeroMenor,int* repeticionesNumeroMenor){
    *numeroMenor = entrada[0][0];
    *repeticionesNumeroMenor = 0;
    for (int i = 0; i<cantfilas ; i++){
        for (int n = 0 ; n < cantcols ; n++){
            if (entrada[i][n]<*numeroMenor){
                *repeticionesNumeroMenor = 0;
                *numeroMenor = entrada[i][n];
            }
            else if (*numeroMenor == entrada[i][n]){
                *repeticionesNumeroMenor += 1;
            }
           }
        }
    }
int main(){
    int numeroMenor,repeticionesNumeroMenor;
    int entrada[cantfilas][cantcols];
    for (int i = 0; i<cantfilas; i++){
        for (int n = 0; n<cantcols ; n++){
            entrada[i][n] = rand() % 4;
            printf("Fila %i, columna %i, valor %i\n",i,n,entrada[i][n]);
        }
    }
    frecuenciaMenorNumero(entrada,cantfilas,cantcols,&numeroMenor,&repeticionesNumeroMenor);
    printf("Numero menor: %i, repeticiones numero menor %i\n",numeroMenor,repeticionesNumeroMenor);
    return 0;
}