#include <stdio.h>

int main(){
    unsigned int año,mes,dia;
    int meses31[] = {1,3,5,7,8,10,12};
    int meses30[] = {4,6,9,11};
    int i = 0;
    printf("Ingrese el año\n");
    scanf("%i",&año);
    printf("Ingrese el mes\n");
    scanf("%i",&mes);
    printf("Ingrese el dia\n");
    scanf("%i",&dia);
    if (año<1 || mes<1 || mes>12 || dia<1 || dia>31 || ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30)|| (mes ==2 && dia>29) || mes == 2 && dia>28 && (año % 4 != 0 || año % 400 != 0))
        printf("La fecha es invalida\n");
    else
        printf("La fecha es valida\n");
    return 0;
}