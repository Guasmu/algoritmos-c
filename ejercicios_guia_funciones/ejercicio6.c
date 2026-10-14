#include <stdio.h>

int es_palindromo(unsigned int n){
    unsigned int resto, numero = 0, n_original = n;
    while (n!=0){
        resto = n % 10;
        numero = numero * 10 + resto;
        n /= 10;
    }
    return (numero == n_original);
}


int main(){
    printf("%i\n",es_palindromo(1234321));
    return 0;
}