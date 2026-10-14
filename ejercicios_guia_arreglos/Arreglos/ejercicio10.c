#include <stdio.h>


void estaPEnArray(int a[],int n,int p,int* posicionP){
    int i = 0;
    *posicionP = -1;
    while (a[i] != p && i<n){
        i++;
    }
    if (a[i] == p){
        *posicionP = i;
    }
}
int main(){
    int array[] = {25,20,14,11,6,8};
    int mf = sizeof(array)/sizeof(array[0]);
    int posicionP,p;
    p = 8;
    estaPEnArray(array,mf,p,&posicionP);
    printf("\n");
    for (int i = 0 ; i < mf ; i++){
        printf("%i\t",array[i]);
    }
    printf("\n");
    printf("p valor : %i posicion : %i\n",p,posicionP);
    return 0;
}