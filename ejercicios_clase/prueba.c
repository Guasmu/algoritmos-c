#include <stdio.h>

#define long_nombres 15
int main(){
    char nombres[long_nombres];
    fgets(nombres, long_nombres, stdin);
    
    fflush(stdin);

    printf("%s",nombres);

    return 0;
}