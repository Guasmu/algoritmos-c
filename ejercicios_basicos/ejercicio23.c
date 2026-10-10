/*23) Escribir un programa que simule el proceso de control de peso y cantidad de personas
que puede transportar un ascensor.
Vamos a suponer que nuestro ascensor puede soportar un máximo de 400 kg y hasta 6
personas.
Nuestra simulación debe proceder del siguiente modo:
- A medida que las personas ingresan al ascensor de a una a la vez, se registra el
peso de la persona.
- Supondremos que el peso de 0 kg, indica que no hay más personas por subir al
ascensor.
- Si en un determinado momento del peso de las personas, se supera el peso
máximo, el ascensor, advertirá mediante un mensaje, que indique que se ha
excedido el peso máximo y nuestra simulación terminará.
- De igual modo, si el ascensor detecta que ha subido una séptima persona al
ascensor, deberá advertir de esto, y nuestra simulación terminará.

Por último, si habiéndose indicado que todas las personas están a bordo del ascensor y las
condiciones establecidas se cumplen, el ascensor anunciará "ascensor en movimiento".
*/

#include <stdio.h>
#define PESOMAXIMO 400
#define AFORO 6
#define FININGRESO 0

int main(){
    float peso,pesoTotal;
    int cantPersonas;
    cantPersonas = pesoTotal = 0;
    printf("Ingrese el peso de la persona a subir al ascensor, 0 para finalizar\n");
    scanf("%f",&peso);
    if (peso != FININGRESO && pesoTotal<= PESOMAXIMO){
    pesoTotal += peso;
    cantPersonas++;
    }
    while (peso != 0 && pesoTotal <= PESOMAXIMO && cantPersonas<=AFORO ){
        printf("Ingrese el peso de la persona a subir al ascensor, 0 para finalizar\n");
        scanf("%f",&peso);
        pesoTotal += peso;
        cantPersonas++;
    }
    if (pesoTotal > PESOMAXIMO)
        printf("Se ha excedido el peso maximo\n");
    if (cantPersonas>AFORO)
        printf("Se ha excedido el aforo\n");
    else if (cantPersonas<=AFORO && pesoTotal<=PESOMAXIMO){
        printf("Ascensor en movimiento\n");
    }
    return 0;
}