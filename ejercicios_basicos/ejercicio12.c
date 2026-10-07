#include <stdio.h>

int main(){
    int base,exponente;
    int resultado = 1;
    base = 2;
    exponente = 5;
    for (int i=0;i<exponente;i++){
        resultado *= base;
    }
    printf("%i\n",resultado);
    return 0;
}