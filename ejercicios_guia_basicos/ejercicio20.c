/* 20) Escribir un programa que permita al usuario ingresar los montos de las compras
de un cliente y que al finalizar informe por pantalla el importe total a pagar,
teniendo en cuenta que si éste supera los $1000 se le debe aplicar un 10% de descuento.
Se desconoce la cantidad de datos que se van a ingresar.
La carga de datos finaliza cuando el usuario ingresa el monto 0 (cero).
Se debe validar que no se ingresen montos negativos indicando al usuario monto invalido.*/

#include <stdio.h>

int main(){
    float monto,total;
    printf("Ingrese los montos de su compra, para finalizar ingrese 0\n");
    scanf("%f",&monto);
    while (monto != 0){
        if (monto<0)
            printf("monto invalido\n");
        else
            total += monto;
        printf("Ingrese nuevamente los montos de su compra, para finalizar ingrese 0\n");
        scanf("%f",&monto);
    }
    if (total>1000){
        printf("Como su importe de $%.2f supera los $1000, se aplica un descuento del $%.2f\n",total,total*0.1);
        total -= (total * 0.1);
    }
    printf("El importe total a pagar es $%.2f\n",total);
    return 0;
}