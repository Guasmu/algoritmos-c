#include <stdio.h>

#define VALOR1 142523532 
#define VALOR2 1232

int divisionEntera(int a,int b){
    int cociente = 0;
    int invertir = 0;
    if (b!=0){
        if (a<0 ^ b<0)
            invertir = 1;
        if (a<0){
            a = a * -1;
        }
        if (b<0){
            b = b * -1;
        }
        while (a>=b){
            a -= b;
            cociente++;
        }
        if (invertir == 1)
            cociente = cociente * -1;
    }
    return cociente;
}


int main(){
    printf("%i",divisionEntera(VALOR1,VALOR2));
    return 0;
}