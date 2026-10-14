#include <stdio.h>

int factorial(int numero){
    if (numero < 0)
        numero = 0;
    else if (numero == 0)
        numero = 1;
    else{
        for (int i = numero ; i>2; i--){
            numero = numero * (i-1);
        }
    }
    return numero;
}
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
    return resultado;
}

double seno(double x,double n){
    double resultado = 0;
    for (double i = 1; i<n ; i++){
        resultado += ((potencia((-1),n)*potencia(x,2*n+1))/(factorial(2*n+1)));
    }
    return resultado;
}


int main(){
    printf("%f",seno(2,1));
    return 0;
}