/*Escribir una funcion en C que reciba como parametro un numero entero y devuelva al modulo invocante los siguientes valores:
-el resultado de multiplicar sus digitos pares 
-la cantidad de digitos que cumplieron la condicion y fueron procesados*/
/*Modulo invocante = devolver por parametros*/

#include <stdio.h>
void cantPares(int numero,int* resultado,int* cantidadDigitosPares){
    int digito,cantPares;
    *cantidadDigitosPares = 0;
    *resultado = 1;
    while(numero != 0){
        digito = numero % 10;
        if (digito % 2 == 0){
            *resultado *= digito;
            cantidadDigitosPares++;
        }
        numero /= 10;
    }
    if (*resultado == 1){
        *resultado = 0;
    }
}