#include <stdio.h>

int main(){
    int numero;
    int n = 1;
    int contadorPar,contadorImpar = 0;
    printf("Ingrese un numero entero positivo\n");
    scanf("%i",&numero);
    while (numero / n != 0){
        if ((numero % (n * 10)) % 2 == 0)
            contadorPar++;
        else
            contadorImpar++;
        n *= 10;
    }
    printf("La cantidad de digitos pares es %i\n",contadorPar);
    printf("La cantidad de digitos impares es %i\n",contadorImpar);
    return 0;
}