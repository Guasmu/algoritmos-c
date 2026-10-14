#include <stdio.h>

int main(){
    int listado[] = {40000,8,9,6,7,41000,5,6,7,5};
    int longitud = *(&listado + 1) - listado;
    int padron,mayorPadron,menorPadron;
    float promedio,mayorPromedio,menorPromedio;
    mayorPromedio = menorPromedio = promedio = (listado[1] + listado[2] + listado[3] + listado[4])/4;
    mayorPadron = menorPadron = listado[0];
    for (int i = 0; i<longitud; i += 5){
        padron = listado[i];
        promedio = (listado[i+1] + listado[i+2] + listado[i+3] + listado[i+4])/4;
        
        if (mayorPromedio<promedio){
            mayorPromedio = promedio;
            mayorPadron = padron;
        }
        else if (menorPromedio>promedio){
            menorPromedio = promedio;
            menorPadron = padron;
        }
    }
    printf("El mayor promedio es: %.2f con padron %i\n",mayorPromedio,mayorPadron);
    printf("El menor promedio es: %.2f con padron %i\n",menorPromedio,menorPadron);
}