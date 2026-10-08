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
typedef int TvecCols[cantcols];
typedef TvecCols TvecFilas[cantfilas];

void ejercicio3(TvecFilas matriz, TvecCols respuesta){
    for (int i = 0; i<cantfilas ; i++){

    }
}