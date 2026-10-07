/*17) Generar un dibujo por pantalla con el siguiente patrón solicitando al usuario la altura.
Ejemplo: altura=5 debe dibujar por pantalla:
*
**
***
****
******/

#include <stdio.h>

int main(){
    unsigned int altura;
    printf("Ingrese la altura del dibujo\n");
    scanf("%i",&altura);
    for (unsigned int i = 1; i<=altura; i++ ){
        for (unsigned int n = 0; n<i ; n++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}