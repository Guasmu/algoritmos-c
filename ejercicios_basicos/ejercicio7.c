#include <stdio.h>
int main(){
    char diasSemana[7][10] = {"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"};
    int dia,i;
    printf("Introduzca el numero del dia de la semana del 1 al 7\n");
    scanf("%i",&dia);
    if(dia>7 || dia<1){
        printf("El numero ingresado esta fuera de rango\n"); 
    }
    else{
        printf("el numero ingresado corresponde al dia %s\n",diasSemana[dia-1]);
    }
    return 0; 
}