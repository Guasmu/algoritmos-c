#include <stdio.h>

int main(){
    float numero,mayor,menor,promedio;
    float suma = 0;
    int cantidad = 0;
    printf("Ingrese numeros de a uno, para finalizar ingrese 0\n");
    scanf("%f",&numero);
    mayor = numero;
    menor = numero;
    promedio = numero;
    while (numero != 0){
        if (mayor<numero)
            mayor = numero;
        else if (menor>numero)
            menor = numero;
        suma += numero;
        cantidad++;
        printf("Ingrese numeros de a uno, para finalizar ingrese 0\n");
        scanf("%f",&numero);
    }
    promedio = suma/cantidad;
    printf("El numero mayor es %.2f\n",mayor);
    printf("El numero menor es %.2f\n",menor);
    printf("El promedio es %.2f\n",promedio);
    return 0;
}