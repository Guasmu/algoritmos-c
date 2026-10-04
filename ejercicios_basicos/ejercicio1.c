#include <stdio.h>
int main() {
    float base,altura,area;
    printf("Ingrese la base y la altura del triangulo\n");
    scanf("%f %f",&base,&altura);
    area = (base*altura)/2;
    printf("la base es %f\n",area);
    return 0;
}