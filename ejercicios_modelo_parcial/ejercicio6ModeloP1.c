#include <stdio.h>

int sucesion(int n,int razon){
    int resultado = 1;
    for (int i = 1 ; i < n ; i++){
        resultado *= razon;
    }
    return resultado;
}

int main(){
    printf("%i\n",sucesion(15,3));
    return 0;
}