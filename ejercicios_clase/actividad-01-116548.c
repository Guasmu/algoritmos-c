#include <stdio.h>
int main(){
    float monto,montoTotal = 0;
    printf("Ingrese el monto de la venta (o 0 para terminar):");
    scanf("%f",&monto);
    while (monto != 0){
        if (monto<0)
            printf("monto no valido\n");
        else 
            montoTotal = montoTotal + monto;
        printf("Ingrese el monto de la venta (o 0 para terminar):");
        scanf("%f",&monto);
    }
    if(montoTotal>10000){
        printf("El total a pagar ($%f) supera los 10000, se aplica descuento del 10 %% \n",montoTotal);
        montoTotal = montoTotal - montoTotal * 0.1;
    }
    printf("Total a pagar $%f\n",montoTotal);
}