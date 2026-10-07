#include <stdio.h>

int es_primo(unsigned int candidato){
    int i = 2;
    while (i<candidato/2 && candidato % i != 0){
        i++;
    }
    if (candidato % i != 0)
        return 1;
    else 
        return 0; 
}

int main(){
    printf("%i\n",es_primo(29));
    return 0;
}