/* Dadas las siguientes declaraciones de constantes y tipos:

#define CANTCOLS 25
#define CANTFILAS 15
typedef int Tmatriz[CANTFILAS][CANTCOLS];

Desarrollar na funcion en lenguaje C que reciba como parametros la estructura ya cargada, sus maximos logicos (de filas y columnas) y un numero entero 
y debe devolver al modulo invocante, la cantidad de columnas pares en las cuales el numero recibido se encuentra presente
*/
#include <stdio.h>
#define CANTCOLS 25
#define CANTFILAS 15
typedef int Tmatriz[CANTFILAS][CANTCOLS];

void numeroEnColsPares(Tmatriz entrada,int maximoLogicoFilas,int maximoLogicoCols,int numero, int *presenteEnColsPares){
    int cantidadEnCols[maximoLogicoCols];
    *presenteEnColsPares = 0;
    for (int i = 0 ; i < maximoLogicoCols ; i++){
        cantidadEnCols[i] = 0;
    }
    for (int i = 0 ; i < maximoLogicoFilas ; i++){
        for (int n = 0 ; n < maximoLogicoCols ; n += 2){
            if (entrada[i][n] == numero && cantidadEnCols[n] != 1){
                cantidadEnCols[n] = 1;
            }
        }
    }
    for (int i = 0 ; i < maximoLogicoCols ; i++){
        if (cantidadEnCols[i] == 1)
        presenteEnColsPares++;
    }
}
