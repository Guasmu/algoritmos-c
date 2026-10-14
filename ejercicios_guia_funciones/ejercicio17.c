#include <stdio.h>

double aproximarPI(double n){
    double pi = 2;
    for (double i=1; i<=n; i++){
        pi *= ((2 * i)/(2* i - 1)) * ((2 * i)/(2 * i + 1));
    }
    return (pi);
}


int main(){
    printf("%.10f\n",aproximarPI(10000));
    return 0;
}