#include <stdio.h>

void estaPEnArray(int a[],int n,int p,int* posicionP){
    int i = 0;
    *posicionP = -1;
    while (a[i] < p && i<n){
        i++;
    }
    if (a[i] == p){
        *posicionP = i;
    }
}