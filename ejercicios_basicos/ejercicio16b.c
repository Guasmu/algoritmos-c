/*16) Dado un número entero positivo ingresado por el usuario, procesarlo e indicar:
(realizar un programa diferente para cada caso)
a) La cantidad de dígitos pares e impares que lo componen.
b) El menor y el mayor dígito del número.*/

#include <stdio.h>

int main(){
    int numero,digito,mayor,menor;
    printf("Ingrese un numero entero positivo\n");
    scanf("%i",&numero);
    mayor = menor = numero % 10;
    while (numero != 0){
        digito = numero % 10;
        if (digito>mayor)
            mayor = digito;
        else if (digito<menor)
            menor = digito;
        numero /= 10;
    }
    printf("El digito mayor del numero es %i\n",mayor);
    printf("El digito menor del numero es %i\n",menor);

    return 0;
}