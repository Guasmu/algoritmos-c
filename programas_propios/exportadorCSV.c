#include <stdio.h>

float deltaErrorTension(float tension){
    return (0.2 + tension * 0.002);
}

float deltaErrorCorriente(float corriente){
    return (0.02 + corriente * 0.01);
}

int main() {

    float valoresCorriente[] = {0.00,0.00,0.01,0.03,0.03,0.04,0.06,0.06,0.07,0.09,0.09,0.10,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.20,0.22,0.23,0.24,0.25,0.26,0.27,0.29,0.29,0.30,0.32,0.32,0.33,0.35,0.36,0.37,0.39,0.40,0.41,0.42,0.43,0.44};

    FILE *fpt = fopen("tablas/valoresEnCSV.csv", "w+");
    
    if (fpt == NULL){
        printf("Error al abrir el archivo.\n");
        return 1;
    }
    fprintf(fpt, "Tension,deltaTension,Corriente,deltaCorriente\n");

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
        fprintf(fpt,"%.4f,%.4f,%.4f,%.4f\n",i,deltaErrorTension(i),valoresCorriente[veces],deltaErrorCorriente(valoresCorriente[veces]));
        veces++;
        contador++;
    }
    
    fclose(fpt);

    printf("Archivo CSV exportado \n");

    return 0;
}