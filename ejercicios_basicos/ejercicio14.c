#include <stdio.h>

int main(){
    int resultado;
    for (int i=1;i<10;i++){
        for (int n=1;n<=100;n++){
            resultado = i * n;
            printf("%i X %i = %i\n",i,n,resultado);
        }
    }
    return 0;
}