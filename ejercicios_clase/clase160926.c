/*1. Se tiene una lista de casos confirmados de coronavirus por cada país 
se pide:
Indicar cual es el promedio mundial
Cantidad de Casos mundiales
Que cantidad de casos tiene el país con menos casos
Que cantidad de casos tiene el país con más casos


Ingrese casos -1 para terminar*/

#include <stdio.h>
int main(){
    int casos,menorCasos,mayorCasos;
    int casosTotales,cantidadPaises= 0;
    float promedioCasos;
    printf("Ingrese la cantidad de casos, ingrese -1 para terminar\n");
    scanf("%i",&casos);
    menorCasos = casos;
    mayorCasos = casos;
    while(casos != -1){
        cantidadPaises = cantidadPaises + 1;
        casosTotales = casosTotales + casos;
        if (casos < menorCasos) 
            menorCasos = casos;
        else if (casos > mayorCasos) 
            mayorCasos = casos;
        printf("Ingrese la cantidad de casos, ingrese -1 para terminar\n");
        scanf("%i",&casos);
    }
    if (cantidadPaises != 0){
        promedioCasos = casosTotales/cantidadPaises;
        printf("el promedio mundial es %.2f\n",promedioCasos);
        printf("la cantidad de casos mundiales es %i\n",casosTotales);
        printf("el pais con mas casos tiene %i\n",mayorCasos);
        printf("el pais con menos casos tiene %i\n",menorCasos);
    }
    else{
        printf("el promedio mundial es 0\n");
        printf("la cantidad de casos mundiales es 0\n");
        printf("el pais con mas casos tiene 0\n");
        printf("el pais con menos casos tiene 0\n");
    }
    return 0;
}