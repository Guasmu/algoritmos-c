/* Desarrolar una funcion en lenguaje C que reciba como parametros un vector de tipo Tvector ya cargado y su maximo logico que devuelva:
-El mayor numero par presente en el vector que se encuentre en una posicion impar (Devolver -1 si no hay alguno)
-Una variable booleana que indique si hay algun numero impar presente en el vector
-Se solicita resolver lo indicado recorriendo una sola vez al vector (0 es par)*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

typedef int Tvector[MAX];

void mayorParEnPosImpar(Tvector entrada,int maximoLogico, int* parEnImpar, int* hayImpar){
    *parEnImpar = -1;
    *hayImpar = 0;
    for (int i = 0 ; i < maximoLogico ; i++){
        if (i % 2 != 0 && entrada[i] % 2 == 0 && entrada[i]>*parEnImpar){
            *parEnImpar = entrada[i];
        }
        if (entrada[i] % 2 != 0 && *hayImpar == 0){
            *hayImpar = 1;
        }
        
    }
}

int main(){
    Tvector lista;
    int maximoLogico = 10;
    int parEnImpar,hayImpar;
    for (int i = 0 ; i < maximoLogico ; i++){
        lista[i] = rand() % 100;
        printf("%i\t%i\n",i,lista[i]);
    }
    mayorParEnPosImpar(lista,maximoLogico,&parEnImpar,&hayImpar);
    printf("%i\t%i\n",parEnImpar,hayImpar);

    return 0;
}