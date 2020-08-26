#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p= malloc(sizeof(char));
    int h;
    for(h = 0; h < 10; h++){
        *(p+h) = 400000;
        printf("Direccion: %d\n", p+h);
    }

    for(h = 0; h < 10; h++)
        printf("El valor de la pos %d es %d\n", h+1, *(p+h));
    return 0;
}
