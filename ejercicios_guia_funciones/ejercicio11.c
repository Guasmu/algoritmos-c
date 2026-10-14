#include <stdio.h>

int ejercicio11(int codigo,int n,int k){
    if (n != 0){
        int exponente,exponente2;
        exponente = exponente2 = 1;
        for (int i=0; i<k; i++){
            exponente *= 10;
        }
        for (int i=0; i<n; i++){
            exponente2 *= 10;
        }
        codigo = (codigo / exponente) % exponente2;

    }
    else{
        codigo = -1;
    }
    return codigo;
}



int main(){
    printf("%i\n",ejercicio11(2002,3,0));
    return 0;
}