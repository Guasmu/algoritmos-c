#include <stdio.h>

int main(){
    float lista[] = {2,4,6,8,10,12,14,16,18,20};
    float copia[1000];
    int size = sizeof(lista)/sizeof(lista[0]);
    printf("size : %i\n",size);
    for (int i=0; i<size; i++){
        copia[i] = lista[i];
        printf("original: Posicion %i, numero %.2f\n",i,lista[i]);
        printf("copia: Posicion %i, numero %.2f\n",i,copia[i]);
    }
    return 0;
}