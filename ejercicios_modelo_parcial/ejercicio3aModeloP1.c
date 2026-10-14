/*Dadas las siguientes declaraciones de constantes y tipos

#define cantcols 15
#define cantfilas 30
typedef int TvecCols[cantcols];
typedef TvecCols TvecFilas[cantfilas];

Asumiendo que la estructura esta cargada en su totalidad, se solicita:

Desarrollar una funcion en lenguaje C que reciba la estructura ya cargada y devuelva al modulo invocante un
vector que contenga en cada posicion la suma de los elementos de cada fila (sumar todas las columnas
por cada fila). Codificar solamente la funcion solicitada.*/

#include <stdio.h>
#define cantcols 15
#define cantfilas 30
typedef int TvecCols[cantcols]; //int[15]
typedef TvecCols TvecFilas[cantfilas]; // int[30][15]

void ejercicio3(TvecFilas matriz, TvecCols respuesta){
    for (int i = 0; i<cantcols ; i++){
        respuesta[i] = 0;
        for (int n = 0; n<cantfilas; n++){
            respuesta[i] += matriz[n][i];
        }
    }
}
/*
int main(){
    int matriz[30][15];
    int respuesta[15];
    for (int i = 0; i<30; i++){
        for (int n = 0; n<15; n++){
            if (n<5){
                matriz[i][n] = 2;
            }
            else{
                matriz[i][n] = 4;
            }
        }
    }
    ejercicio3(matriz,respuesta);
    for (int i=0; i<cantcols; i++){
        printf("%i\n",respuesta[i]);
    }
    return 0;
}
*/