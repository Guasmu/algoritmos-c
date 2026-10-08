/*
Utilizando las declaraciones dadas debajo, implementar la funcion ejercicio_3 que reciba una matriz
cargada con numeros enteros, que representan las cantidades de mililitros de lluvia por hora de cada dia
del mes de noviembre.
La funcion debe mostrar por pantalla el dia y el acumulado de ese dia, de aquellos dias que superen
el promedio diario mensual.

Considerar que solo se puede recorrer una vez la matriz. Esta permitido utilizar el vector auxiliar.

Por ejemplo:

Hora --> 0  1   2   ..22    23  Acumulado x dia
        -------------------------------------------
Dia 1   |0  7   5   ..4     3   ->  51          



El resultado a mostrar seria:
    En el dia 1 han caido 51ml.
    En el dia 3 han caido 52ml.
    ..(Si hay dia entre el 2 y el 30 que superen el promedio se mostraran aqui)
    En el dia 30 han caido 45ml
*/