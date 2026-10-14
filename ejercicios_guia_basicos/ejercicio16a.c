/*16) Dado un número entero positivo ingresado por el usuario, procesarlo e indicar:
(realizar un programa diferente para cada caso)
a) La cantidad de dígitos pares e impares que lo componen.
b) El menor y el mayor dígito del número.*/

#include <stdio.h>

int main(){
    int numero,digito,contadorPar,contadorImpar;
    contadorPar = contadorImpar = 0;
    printf("Ingrese un numero entero positivo\n");
    scanf("%i",&numero);
    while (numero!= 0){
        digito = numero % 10;
        if(digito % 2 != 0){
            contadorImpar++;
        }
        else{
            contadorPar++;
        }
        numero /= 10;
    } 
    printf("La cantidad de digitos pares es %i\n",contadorPar);
    printf("La cantidad de digitos impares es %i\n",contadorImpar);
    return 0;
}