/*Dadas las siguientes declaraciones de constantes y tipos
#define cantcols 15
#define cantfilas 30
typedef int TvecCols[cantcols];
typedef TvecCols TvecFilas[cantfilas];

Asumiendo que la estructura esta cargada en su totalidad, se solicita:

Desarrollar una funcion en lenguaje C que reciba la estructura ya cargada y devuelva al modulo invocante
un vector que contenga en cada posicion el minimo valor de cada fila
Codificar solamente la funcion solicitada
*/
#include <stdio.h>
#include <stdlib.h>
#define cantcols 15
#define cantfilas 30
typedef int TvecCols[cantcols]; //int[15]
typedef TvecCols TvecFilas[cantfilas]; // int[30][15]

void valorMinimo(TvecFilas matriz,int resultado[cantcols]){
    for (int i = 0; i<cantfilas; i++){
        resultado[i] = matriz[i][0];
        for (int n = 0; n < cantcols ; n++){
           if (resultado[i]>matriz[i][n]){
            resultado[i] = matriz[i][n];
           } 
        }
    }
}
int main(){
    
    int matriz[30][15];
    int respuesta[15];
    int random;
    for (int i = 0; i<30; i++){
        for (int n = 0; n<15; n++){
            matriz[i][n] = rand() ;
        }
    }
    valorMinimo(matriz,respuesta);
    for (int i=0; i<cantcols; i++){
        printf("%i\n",respuesta[i]);
    }
    return 0;
}