#include <stdio.h>

int factorial(int numero){
    if (numero < 0)
        numero = 0;
    else if (numero == 0)
        numero = 1;
    else{
        for (int i = numero ; i>2; i--){
            numero = numero * (i-1);
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