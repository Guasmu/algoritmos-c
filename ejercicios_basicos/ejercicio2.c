/*2) Calcular el sueldo de un operario ingresando por teclado la cantidad de horas que
trabajó en el mes y el valor de la hora. Mostrarle el resultado al usuario con un
mensaje adecuado.*/

#include <stdio.h>
int main(){
    int horas;
    float valorHora,sueldo;
    printf("Ingrese la cantidad de horas que trabajo en el mes\n");
    scanf("%i",&horas);
    printf("Ingrese la remuneracion de la hora\n");
    scanf("%f",&valorHora);
    sueldo = valorHora*horas;
    printf("Su sueldo es %f\n",sueldo);
    return 0;
}