#include <stdio.h>

void invertirVector(float lista[],int size,float listaInvertida[]){
    for (int i=0; i<=size; i++){
        listaInvertida[size-i] = lista[i];
    }
}


int main(){
    float lista[100];
    float listaInvertida[100];
    float numero;
    int n = 0;
    printf("Ingrese los numeros, ingrese 0 para terminar\n");
    scanf("%f",&numero);
    while (numero != 0){
        lista[n] = numero;
        n++;
        printf("Ingrese los numeros, ingrese 0 para terminar\n");
        scanf("%f",&numero);
    }
    invertirVector(lista,n,listaInvertida);
    for (int i = 0; i<=n; i++ ){
        printf("I %i, valor: %f\n",i,listaInvertida[i]);
        printf("O %i, valor: %f\n",i,lista[i]);
    }
    return 0;
}