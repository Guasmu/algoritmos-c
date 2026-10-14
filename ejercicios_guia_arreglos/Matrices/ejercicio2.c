/*
2) Dada una matriz cuadrada de 5x5 cargada por el usuario con números
enteros, escribir un programa modular que muestre:
a) Todos los elementos de la matriz.
b) La suma de todos los elementos de la matriz.
c) La suma de la diagonal principal.
d) La suma de la diagonal secundaria.
e) La suma de los elementos del triángulo superior.
f) La suma de los elementos del triángulo inferior.
g) Si es una matriz diagonal (todos los elementos por fuera de la diagonal
principal son igual a cero)
Cada módulo debe optimizar la cantidad de iteraciones a realizar.
*/

#include <stdio.h>
#include <stdbool.h>

#define FILAS 5
#define COLUMNAS 5

void matrizIngresadaPorUsuario(int filas,int columnas,int matriz[filas][columnas]){ // pide valores para una matriz y retorna la matriz construida
    int valor;
    for (int i = 0 ; i < filas ; i++){
        for (int n = 0 ; n < columnas ; n++){
            printf("Ingrese el valor de la fila %i, columna %i\n",i,n);
            scanf("%i",&valor);
            matriz[i][n]= valor;
        }
    }
}
void imprimirMatriz(int filas,int columnas,int matriz[filas][columnas]){ // imprime todos los elementos de una matriz por pantalla, con formato de matriz
    printf("Los valores de su matriz son:\n");
    for (int i = 0 ; i < filas ; i++){
        for (int n = 0 ; n < columnas ; n++){
            printf("%i\t",matriz[i][n]);
        }
        printf("\n");
    }
}
void sumaTodosElementosMatriz(int filas,int columnas,int matriz[filas][columnas],int* suma){ // suma todos los elementos de una matriz y retorna el resultado
    *suma = 0;
    for (int i = 0 ; i < filas ; i++){
        for (int n = 0 ; n < columnas ; n++){
            *suma += matriz[i][n];
        }
    }
}
void sumaDiagonalPrincipalMatriz(int filas,int columnas,int matriz[filas][columnas], int*sumaDiagonalPrincipal){ // suma los elementos que se encuentran en la diagonal principal de la matriz y retorna el resultado
    *sumaDiagonalPrincipal = 0;
    for (int i = 0 ; i < filas ; i++){
        *sumaDiagonalPrincipal += matriz[i][i]; // Esta funcion solo funciona para matrices cuadradas, como pide optimizar la cantidad de iteraciones dejo esta solucion.
    }
}

void sumaDiagonalSecundariaMatriz(int filas,int columnas,int matriz[filas][columnas], int*sumaDiagonalSecundaria){ // suma los elementos que se encuentran en la diagonal secundaria de la matriz y retorna el resultado
    *sumaDiagonalSecundaria = 0;
    for (int i = 0 ; i < filas ; i++){
        *sumaDiagonalSecundaria += matriz[i][columnas-i-1]; // Esta funcion solo funciona para matrices cuadradas
    }

}
void sumaTrianguloSuperiorMatriz(int filas,int columnas,int matriz[filas][columnas], int*sumaTrianguloSuperior){ // suma todos los elementos del triangulo superior de la matriz y retorna el resultado
    *sumaTrianguloSuperior = 0;
    for (int i = 0 ; i < filas ; i++){
        for (int n = i ; n < columnas ; n++){
            *sumaTrianguloSuperior += matriz[i][n];
        }
    } 
}
void sumaTrianguloInferiorMatriz(int filas,int columnas,int matriz[filas][columnas], int*sumaTrianguloInferior){ // suma todos los elementos del triangulo inferior de la matriz y retorna el resultado
    *sumaTrianguloInferior = 0;
    for (int i = 0 ; i < filas ; i++){
        for (int n = 0 ; n <= i ; n++){
            *sumaTrianguloInferior += matriz[i][n];
        }
    } 
}
void esDiagonal(int filas,int columnas,int matriz[filas][columnas], bool* esDiagonal){ // Verifica si todos los elementos de ambos triangulos son cero, y devuelve el resultado 
    *esDiagonal = true;
    int n,i;
    i = n = 0;
    while (*esDiagonal == true && i<filas-1){
        n = i+1;
        while (*esDiagonal == true && n<columnas){
            if (matriz[i][n] != 0){
                *esDiagonal = false;
            }
            n++;
        }
        i++;
    }
    i = n = 0;
    while (*esDiagonal == true && n < columnas-1){
        i = n+1;
        while(*esDiagonal == true && i < filas){
            if (matriz[i][n] != 0){
                *esDiagonal = false;
            }
            i++;
        }
        n++;
    }
}

int main(){
    int matriz[FILAS][COLUMNAS];
    int suma,sumaDiagonalPrincipal,sumaDiagonalSecundaria,sumaTrianguloSuperior,sumaTrianguloInferior;
    bool diagonal;

    matrizIngresadaPorUsuario(FILAS,COLUMNAS,matriz);

    imprimirMatriz(FILAS,COLUMNAS,matriz);

    sumaTodosElementosMatriz(FILAS,COLUMNAS,matriz,&suma);
    printf("La suma de todos los elementos es %i\n",suma);

    sumaDiagonalPrincipalMatriz(FILAS,COLUMNAS,matriz,&sumaDiagonalPrincipal);
    printf("La suma de los elementos de la diagonal principal es %i\n",sumaDiagonalPrincipal);

    sumaDiagonalSecundariaMatriz(FILAS,COLUMNAS,matriz,&sumaDiagonalSecundaria);
    printf("La suma de los elementos de la diagonal secundaria es %i\n",sumaDiagonalSecundaria);

    sumaTrianguloSuperiorMatriz(FILAS,COLUMNAS,matriz,&sumaTrianguloSuperior);
    printf("La suma de los elementos del triangulo superior es %i\n",sumaTrianguloSuperior);

    sumaTrianguloInferiorMatriz(FILAS,COLUMNAS,matriz,&sumaTrianguloInferior);
    printf("La suma de los elementos del triangulo inferior es %i\n",sumaTrianguloInferior);

    esDiagonal(FILAS,COLUMNAS,matriz,&diagonal);
    printf("La matriz %s\n",diagonal? "es diagonal":"no es diagonal" );
    return 0;
}