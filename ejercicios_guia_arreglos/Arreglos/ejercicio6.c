#include <stdio.h>

void elementosNegativosYPositivos(int entrada[],int cantidadElementos,int *cantNegativos,int *cantPositivos){
    *cantNegativos = *cantPositivos = 0;
    for (int i = 0; i < cantidadElementos ; i++){
        if (entrada[i]<0){
            ++*cantNegativos;
        }
        else if (entrada[i]>0){
            ++*cantPositivos;
        }
    }
}
int main(){
    int array[] = {0,0,10,12,23,55,1};
    int negativos,positivos;

    elementosNegativosYPositivos(array,7,&negativos,&positivos);
    printf("Negativos:%i\tPositivos:%i\n",negativos,positivos);
    return 0;
}