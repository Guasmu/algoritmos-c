/*11) Dado un número n, informar los n primeros términos de la sucesión geométrica de
razón 3 (1, 3, 9, 27, etc.).*/

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