#include <stdio.h>

float porcentaje(float n1,float n2){
    float valor = (n1/n2)*100;
    return (valor);
}



int main(){
    printf("%.2f%%",porcentaje(2.222,10));
    return 0;
}