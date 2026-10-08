/*
Dadas las siguientes declaraciones de constantes y tipos 
#define MAX 500
typedef int Tvector[MAX]

Desarrollar una funcion en lenguaje C que reciba como parametros un vector de tipo Tvector ya cargado
y su maximo logico que devuelva al modulo invocante:
-El indice en el vector del primer numero negativo presente en el mismo devolver -1 en caso de no haber
ninguno
-una variable booleana que indique si contiene al menos un numero par mayor que 100

Resolver lo solicitado recorriendo uan sola vez al vector

*/

void ejercicio2(Tvector vec,int ml,int* indicePrimerNegativo,int* tieneParMayorQue100){
    int indice;
    int hayNegativo,hayParMayorQue100,i = 0;
    while(hayNegativo != 1 && hayParMayorQue100 != 1){
        if (vec[i]<0){
            hayNegativo = 1;
            indice = i;
        }
        if (vec[i]>100 && vec[i] % 2 == 0)
            hayParMayorQue100 = 1;
        i++;
    }
    *indicePrimerNegativo = indice;
    *tieneParMayorQue100 = hayParMayorQue100;
}