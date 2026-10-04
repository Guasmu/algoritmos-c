#include <stdio.h>
float base,altura,area;
int baseTriangulo(float base,float altura){
    scanf("%f %f", &base ,&altura);
    area = (base*altura)/2;
    return area;
}
int main(){
    printf("Ingrese la base y la altura del triangulo\n");
    scanf("%f %f",&base,&altura);
    printf("%d",baseTriangulo(base,altura));
    return 0;
}