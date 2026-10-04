#include <stdio.h>
int main(){
    int numero;
    printf("Ingrese un numero entero\n");
    scanf("%i",&numero);
    if(numero>0){
        printf("%i es mayor a cero\n",numero);
    }
    else if(numero==0){
        printf("%i es igual a cero\n",numero);
    }
    else{
        printf("%i es menor a cero\n",numero);
    }
    return 0;
}
