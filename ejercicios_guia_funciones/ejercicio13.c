#include <stdio.h>

typedef unsigned int uint;

uint cantDiasMes(uint mes, uint año){
    uint cantDias;
    
    if (!(mes == 4 || mes == 6 || mes == 9 || mes == 11 || mes == 2)){
        cantDias = 31;
    }
    else if (mes != 2){
        cantDias = 30;
    }
    else if (!(año % 4 == 0 && año % 400 == 0)){
        cantDias = 28;
        }
    else{
        cantDias = 29;
    }
    return cantDias;
    }

/*
int main(){
    printf("%i\n",cantDiasMes(2,2000));
    return 0;
}
*/