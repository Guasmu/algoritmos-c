#include <stdio.h>
int main(){
    float radio,volumen;
    float pi = 3.141593;
    printf("Ingrese el radio de la esfera\n");
    scanf("%f",&radio);
    volumen =(1.333333*pi*radio*radio*radio);
    printf("El volumen de la esfera es %f\n",volumen);
    return 0;
}