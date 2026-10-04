#include <stdio.h>
int main(){
    float n1,n2,n3,mayor;
    printf("Ingrese tres numeros\n");
    scanf("%f %f %f",&n1,&n2,&n3);
    if (n1>=n2 && n1>=n3){
        mayor = n1;
        }
    else if (n3>=n2){
        mayor = n3;
        }
    else{
        mayor = n2;
    }
    printf("El numero mayor es %f ",mayor);
    return 0;
}