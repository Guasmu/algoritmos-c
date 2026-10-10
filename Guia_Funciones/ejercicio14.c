#include <stdio.h>

int esPerfecto(int numero){
    int sumaDivisores = 0;
    for (int i=1; i<numero ; i++){
        if (numero % i == 0){
            sumaDivisores += i;
        }
    }
    return (numero == sumaDivisores);
}


int main(){
    printf("%i\n",esPerfecto(6));
    return 0;
}