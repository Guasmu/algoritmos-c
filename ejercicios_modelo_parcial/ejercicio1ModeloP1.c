/*Escribir una funcion en C que reciba como parametro un numero entero y devuelva al modulo invocante los siguientes valores:
-el resultado de multiplicar sus digitos pares 
-la cantidad de digitos que cumplieron la condicion y fueron procesados*/
/*Modulo invocante = devolver por parametros*/

#include <stdio.h>

void multiplicacionPar(int numero, int* producto, int* cantidad){
    int digito,productoAuxiliar,cantidadAuxiliar;
    
    cantidadAuxiliar = 0;
    productoAuxiliar = 1;

    while (numero != 0){
        digito = numero % 10;
        if (digito % 2 == 0){
            productoAuxiliar *= digito;
            cantidadAuxiliar++;
        }
        numero /= 10;
    }
    if (productoAuxiliar == 1){
        productoAuxiliar = 0;
    }
    
    *producto = productoAuxiliar;
    *cantidad = cantidadAuxiliar;
}

int main(){
    int producto,cantidad,numero;
    numero = 24682;
    multiplicacionPar(numero,&producto,&cantidad);
    printf("producto %i, cantidad %i\n",producto,cantidad);

    return 0;
}
