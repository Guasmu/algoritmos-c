#include <stdio.h>

int main(){
    int edad;
    int* p1;

    edad=12;

    printf("edad = %d\n",edad);

    p1=&edad;

    printf("p1 = %p\n",p1);

    *p1=15;

    printf("edad = %d\n",edad);

    return 0;
}