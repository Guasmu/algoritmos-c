#include <stdio.h>

#define FECHA 20260102

void fecha_a_parametros(int fecha, int* dia, int* mes, int* año){
    *dia = fecha % 100;
    *mes = (fecha % 10000)/100;
    *año = (fecha % 1000000)/10000;
}



int main(){
    int dia,mes,año;
    fecha_a_parametros(FECHA,&dia,&mes,&año);
    printf("Dia %i, Mes %i, Año %i",dia,mes,año);
    return 0;
}