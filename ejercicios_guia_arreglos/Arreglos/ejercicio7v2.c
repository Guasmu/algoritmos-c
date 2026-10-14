#include <stdio.h>

void agregarPOrdenado(int entrada[],int ml,int mf,int p){
    if (mf>ml){
        int i = 0;
        while (p>entrada[i] && i <= ml){
            i++;
        }
        if (p<entrada[i] && p>entrada[i-1]){
            for (int n = mf ; n > i ; n--){
                entrada[n] = entrada[n-1];
            }
            entrada[i] = p;
        }
    }
}
int main(){
    int array[] = {3,6,9,16,21,45,0};
    int mf = sizeof(array)/sizeof(array[0]);
    for (int i = 0 ; i < mf ; i++){
        printf("%i\t",array[i]);
    }
    printf("\n");

    agregarPOrdenado(array,6,mf,14);

    for (int i = 0 ; i < mf ; i++){
        printf("%i\t",array[i]);
    }

    return 0;
}