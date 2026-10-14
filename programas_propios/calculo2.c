#include <stdio.h>

float deltaErrorTension(float tension){
    return (0.2 + tension * 0.002);
}


int main(){
    float i = 0.0;
    int contador = 1;
    int veces = 0;
    while (i<13.5){
        if (contador == 2)
            i = i + 0.2;
        else if (contador == 3)
            i = i + 0.3;
        else if (contador == 4){
            i = i + 0.5;
            contador = 1;
        }
        printf("el error es %f, %f V\n",deltaErrorTension(i),i);
        veces++;
        contador++;
    }
    printf("%i\n",veces);
    return 0;
}