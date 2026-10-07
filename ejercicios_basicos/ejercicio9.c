#include <stdio.h>
int main(){
    float temperatura,nuevaTemperatura;
    char unidad,nuevaUnidad;
    printf("Ingrese el valor de temperatura a convertir\n");
    scanf("%f",&temperatura);
    printf("Ingrese la unidad de la temperatura\n");
    scanf(" %c",&unidad);
    if (unidad == 'F'){
        nuevaTemperatura = (5.0/9.0) *(temperatura - 32);
        nuevaUnidad = 'C';
    }
    else if (unidad == 'C'){
        nuevaTemperatura = temperatura * (9.0/5.0) + 32;
        nuevaUnidad = 'F';

    }
    printf("La temperatura convertida es %.2f%c\n",nuevaTemperatura,nuevaUnidad);

}