#include <stdio.h>

int main(){
    int i = 0;
    char nombre[] = "Maximiliano Jungheim";

    while (nombre[i] != '\0'){
        printf("%c\n",nombre[i]);
        i++;
    }
    return 0;
}