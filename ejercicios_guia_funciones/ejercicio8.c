#include <stdio.h>

#define VALOR1 100 
#define VALOR2 22

int restoDivisionEntera(int a,int b){
    int invertir = 0;
    if (b!=0){
        if (a<0){
            a = a * -1;
            invertir = 1;
        }
        if (b<0){
            b = b * -1;
        }
        while (a>=b){
            a -= b;
        }
        if (invertir == 1)
            a = a * -1;
    }
    return a;
}

int main(){
    printf("%i",restoDivisionEntera(VALOR1,VALOR2));
    return 0;
}