#include <stdio.h>

int main(){
    int array[100];
    int posiciones[100];
    int ingreso,valorMaximo,cantValorMaximo,i;
    i = 0;
    cantValorMaximo = 0;
    printf("Ingrese los datos, para finalizar ingrese 0\n");
    scanf("%i",&ingreso);
    valorMaximo = ingreso;
    while(ingreso != 0){
        array[i] = ingreso;
        if(ingreso>valorMaximo){
            cantValorMaximo = 1;
            for (int n = 0 ; n < 100 ; n ++){
                posiciones[n] = -1;
            }
            posiciones[cantValorMaximo] = i;
            valorMaximo = ingreso;
        }
        else if (ingreso == valorMaximo){
            posiciones[cantValorMaximo] = i;
            cantValorMaximo++;
        }
        i++;
        printf("Ingrese los datos, para finalizar ingrese 0\n");
        scanf("%i",&ingreso);
    }
    printf("Valor maximo %i, Cant veces %i\n",valorMaximo,cantValorMaximo);
    printf("Posiciones:\n");
    for (int n = 0 ; n < cantValorMaximo ; n ++){
        printf("%i\t",posiciones[n]);
    }


    return 0;
}