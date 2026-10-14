#include <stdio.h>

double potencia(int a,int b){
    double resultado=a;
    double aPrima=a;
    if (b>0){
        for (int i = 1; i<b; i++)
            resultado = resultado * a;
    }
    else if (a !=0 && b==0)
        resultado = 1;
    else if (b<0){
        b = b * -1;
        aPrima = resultado = (1/aPrima);
        for (int i = 1; i<b; i++)
            resultado = (resultado * aPrima);
    }
    return (resultado);
}



int main(){
    printf("%f",potencia(-2,-3));
    return 0;
}