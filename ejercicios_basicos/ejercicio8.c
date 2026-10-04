#include <stdio.h>
int main(){
    int mes,cantDias,i;
    int diasMes[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
    printf("Introduzca el numero del mes del 1 al 12\n");
    scanf("%i",&mes);
    cantDias = diasMes[mes-1];
    printf("el mes ingresado tiene %i dias\n",cantDias);
    return 0;
}