#include <stdio.h>

int main(){
    int n;
    long long resultado = 1;
    printf("Ingrese un numero n\n");
    scanf("%i",&n);
    for (int i=0; i<n ; i++){
        printf("%lli\n",resultado);  
        resultado *= 3;
    }
    return 0;

}