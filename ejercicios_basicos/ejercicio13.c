#include <stdio.h>




int main(){
    int ingreso,factorial;
    printf("Ingrese un numero entero positivo\n");

    scanf("%i",&ingreso);

    if (ingreso<0)
        printf("No se puede calcular el factorial del numero ingresado\n");

    else if (ingreso == 0)
        printf("El factorial es 1\n");
    else{
        factorial = ingreso;
        for (unsigned int i = 1; i<ingreso ; i++)
            factorial *= i;
        printf("El factorial es %i\n",factorial);
    }
    return 0;
}