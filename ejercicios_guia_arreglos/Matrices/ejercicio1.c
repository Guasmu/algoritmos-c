#include <stdio.h>

#define filas 3
#define columnas 4

int main(){
    float matriz[filas][columnas];
    float valor;
    for (int i = 0 ; i < filas ; i++ ){
        for (int n = 0 ; n < columnas ; n++){
            printf("Ingrese el valor de la fila %i, columna %i\n",i,n);
            scanf("%f",&valor);
            matriz[i][n] = valor;
        }
    }
    printf("Los datos de su matriz son:\n");
    for (int i = 0 ; i < filas ; i++ ){
        for (int n = 0 ; n < columnas ; n++){
            printf("%.1f\t",matriz[i][n]);
        }
        printf("\n");
    }
    return 0;
}