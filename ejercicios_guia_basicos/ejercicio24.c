
#include <stdio.h>

#define PESOMAXIMO 1500
#define AFORO 20
#define HMIN 160
#define HMAX 190
#define FININGRESO 0

int main(){
    float peso,altura,pesoTotal;
    int cantParticipantes = 0;
        printf("Ingrese su peso\n");
        scanf("%f",&peso);
        if (peso != 0){
            printf("Ingrese su altura\n");
            scanf("%f",&altura);
            if (altura<HMIN || altura>HMAX){
                printf("Altura del participante fuera del rango permitido\n");
            }
            else{
                pesoTotal += peso;
                cantParticipantes++;
            }
        }
    while (peso != FININGRESO && pesoTotal!=PESOMAXIMO && cantParticipantes!=AFORO){
        printf("Ingrese su peso\n");
        scanf("%f",&peso);
        if (peso !=0){
            printf("Ingrese su altura\n");
            scanf("%f",&altura);
            if (altura<HMIN || altura>HMAX){
                printf("Altura del participante fuera del rango permitido\n");
            }
            else if (peso + pesoTotal>PESOMAXIMO){
                printf("Peso total excedido, el participante no puede subir\n");
            }
            else{
                pesoTotal += peso;
                cantParticipantes++;
            }
        }
    }
    if (cantParticipantes == AFORO){
        printf("Cantidad maxima de participantes alcanzada\n");
        printf("El juego puede comenzar\n");
    }
    else if (pesoTotal == PESOMAXIMO){
        printf("Peso maximo alcanzado\n");
        printf("El juego puede comenzar\n");
    }
    else if (peso == FININGRESO){
        printf("No hay mas participantes\n");
        printf("El juego puede comenzar\n");
    }   
    //printf("Peso total : %.2f, Cantidad participantes %i\n",pesoTotal,cantParticipantes);
    

    return 0;
}