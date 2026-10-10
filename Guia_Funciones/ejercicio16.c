#include <stdio.h>

int sonAmigos(int n1,int n2){
    int amigo1,amigo2,divisor;
    amigo1 = amigo2 = divisor = 0;
    for (int i=1; i<n1; i++){
        if (n1 % i == 0){
            divisor += i;
        }
    }
    if (divisor == n2){
        amigo1 = 1;
    }
    divisor = 0;
    for (int i=1; i<n2; i++){
        if (n2 % i == 0){
            divisor += i;
        }
    }
    if (divisor == n1){
        amigo2 = 1;
    }
    return (amigo1 && amigo2);
}


int main(){
    printf("%i\n",sonAmigos(220, 284));
    return 0;
}