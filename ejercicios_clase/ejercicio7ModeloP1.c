#include <stdio.h>
#include <stdlib.h>
#define cantfilas 4
#define cantcols 3

typedef int Tmatriz[cantfilas][cantcols];

void frecuenciaMenorNumero(Tmatriz entrada,int maximoLogicoFilas,int maximoLogicoCols){
    int menorNumero,repeticionesMenorNumero;
    repeticionesMenorNumero = 0;
    menorNumero = entrada[0][0];
    for(int i = 0 ; i < cantfilas ; i++){
        for(int n = 0 ; n < cantcols ; n++){
            if (menorNumero>entrada[i][n]){
                repeticionesMenorNumero = 0;
                menorNumero = entrada[i][n];
            }
            else if (menorNumero == entrada[i][n]){
                repeticionesMenorNumero++;
            }
        }
    }
    printf("%i\t%i\n",menorNumero,repeticionesMenorNumero);
}

int main(){
    int matriz[cantfilas][cantcols];
    for(int i = 0 ; i < cantfilas ; i++){
        for (int n = 0 ; n < cantcols ; n++){
            matriz[i][n] = rand() % 3;
            printf("%i\t%i\t%i\n",i,n,matriz[i][n]);
        }
    }
    frecuenciaMenorNumero(matriz,cantfilas,cantcols);
    return 0;
}