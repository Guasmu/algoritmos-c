#include <stdio.h>

#define ENTRADA 1234567

void segundosAFecha(int entrada,int* dias,int* horas,int* minutos,int* segundos){
    *dias = entrada/(3600*24);
    *horas = (entrada - 3600*24**dias)/3600;
    *minutos = (entrada - 3600*24**dias - 3600**horas)/60;
    *segundos = (entrada - 3600*24**dias - 3600**horas - 60**minutos);

}

int main(){
    int dias,horas,minutos,segundos;
    segundosAFecha(ENTRADA,&dias,&horas,&minutos,&segundos);
    printf("%i Dias %i Horas %i Minutos %i Segundos",dias,horas,minutos,segundos);
    return 0;
}