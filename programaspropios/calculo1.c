#include <stdio.h>
#include <math.h>

char* incertidumbreIndirecta(char datosEntrada[4]){
    float v = datosEntrada[0];
    float i = datosEntrada[1];
    float dv = datosEntrada[2];
    float di = datosEntrada[3];
    float dR,R;
    dR = sqrt((((1/i)*dv)*((1/i)*dv)+((-v/(i*i))*di)*((-v/(i*i))*di)));
    R = v/i;
    char resultados[] = {v,i,R,dR};
   return resultados; 
}
int main(){
    datosTabla[]
    float v,i,dv,di,dR,R;
    dR = sqrt((((1/i)*dv)*((1/i)*dv)+((-v/(i*i))*di)*((-v/(i*i))*di)));
    R = v/i;
    return 0;
}