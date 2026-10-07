/*13) Solicitar un número entero positivo al usuario y calcular su factorial. En el caso de
ingresar un número negativo mostrar un mensaje que diga “no se puede calcular el factorial
del número ingresado”.
Recordar que por definición factorial(0)=1 y factorial(1)=1*/

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