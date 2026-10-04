#include <stdio.h>

int factorial(int numero){
    if (numero < 0)
        numero = 0;
    else if (numero == 0)
        numero = 1;
    else{
        int i = numero;
        while (i != 1){
            numero = numero * (i-1);
            i--;
        }
    }
    return numero;
}

int main(){
    printf("%d\n",factorial(-8));
    printf("%d\n",factorial(0));
    printf("%d\n",factorial(1));
    printf("%d\n",factorial(5));
    return 0;
}