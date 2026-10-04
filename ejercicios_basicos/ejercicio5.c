#include <stdio.h>
int main(){
    int numero;
    printf("Ingrese un numero entero\n");
    scanf("%i",&numero);
    if(numero%2 != 0)
        printf("%i es impar",numero);
    else
        printf("%i es par",numero);
    if(numero>0)
        printf(" y es mayor a cero\n");
    else if(numero==0)
        printf(" y es igual a cero\n");
    else
        printf(" y es menor a cero\n");
    return 0;
}