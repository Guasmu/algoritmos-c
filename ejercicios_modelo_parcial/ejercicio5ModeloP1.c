#include <stdio.h>
#define MAX 6

int main(){
    float vec[MAX] = {107.00,23.00,30.00,42.00,204.00,15.00};
    float valor;
    for(int i = 0 ; i < MAX/2 ; i++){
        valor = vec[i];
        vec[i] = vec[MAX-1-i];
        vec[MAX-1-i] = valor;
    }
}