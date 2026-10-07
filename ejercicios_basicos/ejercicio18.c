/*18) Se realiza una encuesta para estimar el grado de aceptación de los productos x e y en
el mercado. A cada encuestado se le pregunta si consume el producto x y si consume el
producto y. La respuesta puede ser sí o no.
Se pide calcular e informar el porcentaje de consumidores de:
a) del producto x
b) del producto y
c) del producto x solamente
d) del producto y solamente
e) de ambos productos
f) de ninguno de los productosSe realiza una encuesta para estimar el grado de aceptación de los productos x e y en
el mercado. A cada encuestado se le pregunta si consume el producto x y si consume el
producto y. La respuesta puede ser sí o no.*/

/*Al tener que calcular asumi que la encuesta ya habia sido realizada y por ende recibiria los datos en forma de variable, simulo eso dandole valores, se puede armar como funcion pero dentro de esta guia asumo que no se tiene conocimiento del mismo */

#include <stdio.h>

int main(){
    float pX,pY,pXY,pEX,pEY,pN,cCX,cCY,cCXY,cE; /*porcentajeX,porcentajeY,porcentajeExclusivoX,porcentajeExclusivoY,porcentajeAmbos,porcentajeNinguno,cantidadConsumidoresX,cantidadConsumidoresY,cantidadConsumidoresXY,cantidadEncuestados*/
    cCX = 20;
    cCY = 60;
    cCXY = 10;
    cE = 100;

    pX = cCX / cE;
    pY = cCY / cE;
    pXY = cCXY / cE; 
    pEX = pX - pXY;
    pEY = pY - pXY;
    pN = 1 - pX - pY;

    printf("El porcentaje de consumidores que consume el producto x es %.2f%%\n",pX * 100);
    printf("El porcentaje de consumidores que consume el producto y es %.2f%%\n",pY * 100);
    printf("El porcentaje de consumidores que consume unicamente el producto x es %.2f%%\n",pEX * 100);
    printf("El porcentaje de consumidores que consume unicamente el producto y es %.2f%%\n",pEY * 100);
    printf("El porcentaje de consumidores que consumen ambos productos es %.2f%%\n",pXY * 100);
    printf("El porcentaje de consumidores que no consumen ni el producto x ni el producto y es %.2f%%\n",pN * 100);

    return 0;
}