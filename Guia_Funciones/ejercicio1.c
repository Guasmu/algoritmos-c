#include <stdio.h>

long suma_entre_0_y_n(long n){
    for (long i=n-1; i>0 ; i-- ){
        n = n + i;
    }
    return n;
}

int main(){
    printf("%li\n",suma_entre_0_y_n(120120));
    return 0;
}