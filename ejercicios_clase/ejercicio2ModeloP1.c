/*
Dadas las siguientes declaraciones de constantes y tipos 
#define MAX 500
typedef int Tvector[MAX]

Desarrollar una funcion en lenguaje C que reciba como parametros un vector de tipo Tvector ya cargado
y su maximo logico que devuelva al modulo invocante:
-El indice en el vector del primer numero negativo presente en el mismo devolver -1 en caso de no haber
ninguno
-una variable booleana que indique si contiene al menos un numero par mayor que 100

Resolver lo solicitado recorriendo una sola vez al vector

*/
#include <stdio.h>

#define MAX 500
typedef int Tvector[MAX];


void ejercicio2(Tvector vec,int ml,int* indicePrimerNegativo,int* tieneParMayorQue100){
    int indice = -1;
    int hayNegativo,hayParMayorQue100,i;
    hayNegativo = hayParMayorQue100 = i = 0;
    while((hayNegativo != 1 || hayParMayorQue100 != 1) && i<ml){
        if (vec[i]<0){
            hayNegativo = 1;
            indice = i;
        }
        if (vec[i]>100 && vec[i] % 2 == 0)
            hayParMayorQue100 = 1;
        i++;
    }
    printf("%i\n",i);
    *indicePrimerNegativo = indice;
    *tieneParMayorQue100 = hayParMayorQue100;
}
int main(){
    int indicePrimerNegativo,parMayorQue100;
    Tvector vector = {2,3,4,5,6,7,8,-3,102,3,4,5,6,7,106};
    int maximoLogico = sizeof(vector)/sizeof(vector[0]);
    ejercicio2(vector,maximoLogico,&indicePrimerNegativo,&parMayorQue100);
    printf("indice primer negativo : %i, tiene par mayor que 100 : %i\n",indicePrimerNegativo,parMayorQue100);
    return 0;
}