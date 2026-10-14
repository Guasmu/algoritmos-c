/*21) Se dan como datos de entrada las fechas de nacimiento (día, mes, año) y los números
de DNI de cada integrante de un grupo.
Se indica fin de datos de entrada cuando día = 0.
Muestre por pantalla el número de DNI del integrante más joven del grupo.*/

/*Asumi que se hacia como el ejercicio 20, ya que hasta el momento no se uso strings ni otras maneras de almacenar y otorgar estos datos.
Tambien es importante saber que en Argentina el DNI a pesar que en general si tiene una correlacion inversa entre edad y numero, no se cumple en todos los casos.
Para extranjeros se usa el 90 millones (mucho mayor que cualquier DNI hasta el momento) y por temas de burocracia puede haber gente mayor que otra con 
un numero de DNI mayor, cuando idealmente deberia ser al reves*/

#include <stdio.h>

int main(){
    int day,month,year,dni,minorD,minorM,minorY,minorDni;
    int contador = 1;
    printf("Ingrese el dia de nacimiento del integrante %i\n",contador);
    scanf("%i",&day);
    printf("Ingrese el mes de nacimiento del integrante %i\n",contador);
    scanf("%i",&month);
    printf("Ingrese el año de nacimiento del integrante %i\n",contador);
    scanf("%i",&year);
    printf("Ingrese DNI del integrante %i\n",contador);
    scanf("%i",&dni);
    minorD = day;
    minorM = month;
    minorY = year;
    minorDni = dni;

    while (day!=0){

        if (year > minorY){
            minorD = day;
            minorM = month;
            minorY = year;
            minorDni = dni;
        }
        else if (month>minorM && year == minorY){
            minorD = day;
            minorM = month;
            minorY = year;
            minorDni = dni;
        }
        else if (day>minorD && month== minorM && year== minorY){
            minorD = day;
            minorM = month;
            minorY = year;
            minorDni = dni;
        }
        contador++;
        printf("Ingrese el dia de nacimiento del integrante %i\n",contador);
        scanf("%i",&day);
        if (day!=0){
            printf("Ingrese el mes de nacimiento del integrante %i\n",contador);
            scanf("%i",&month);
            printf("Ingrese el año de nacimiento del integrante %i\n",contador);
            scanf("%i",&year);
            printf("Ingrese DNI del integrante %i\n",contador);
            scanf("%i",&dni);
        }
    }
    printf("El DNI del integrante mas joven es %i\n",minorDni);

    return 0;
}