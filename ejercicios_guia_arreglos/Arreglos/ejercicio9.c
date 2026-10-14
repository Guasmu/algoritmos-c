#include <stdio.h>

#define N 5
#define M 4

int main(){
    int a[N]= {1,3,5,7,9};
    int b[M]= {8,6,4,2};
    const int ml = N+M;
    int c[ml];
    int valor,i,n;
    i = 0;
    n = M-1;
    for (int posicion = 0 ; posicion < ml ; posicion++){
        if (a[i]<b[n]){
            c[posicion] = a[i];
            i++;
        }
        else{
            c[posicion] = b[n];
            n--;
        }
    } 

    printf("\n");
    for (int i = 0 ; i < ml ; i++){
        printf("%i\t",c[i]);
    }

    return 0;
}