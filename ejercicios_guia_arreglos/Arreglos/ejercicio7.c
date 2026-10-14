#include <stdio.h>


int main(){
    int array[] = {3,6,9,16,21,45,0};
    int p,ml,mf,k;
    p = 14;
    ml = 6;
    mf = sizeof(array)/sizeof(array[0]);
    for (int i = 0 ; i < mf ; i++){
        printf("%i\t",array[i]);
    }
    printf("\n");
    if (ml<mf){ 
        for (int i = 0 ; i < mf; i++){
            if (p<array[i] && p>array[i-1]){
                for (int n = mf ; n > i ; n--){ // no se si cuenta esto como recorrer una vez
                    array[n] = array[n-1];
                }
                array[i] = p;
            }
        }
    }
    for (int i = 0 ; i < mf ; i++){
        printf("%i\t",array[i]);
    }
    return 0;
}

