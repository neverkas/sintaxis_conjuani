#include <stdio.h>
#include <stdlib.h> // necesario para usar malloc

int main(){

  int *p = malloc(sizeof(int)*4);

  //(p+1) = 3;

  // mostramos las direcciones de memoria que reservamos
  printf("1er dirección en memoria: %p \n", p);
  printf("2da dirección en memoria: %p \n", p+1);
  printf("3er dirección en memoria: %p \n", p+2);

  printf("\n ----------------------------- \n");

  // asignamos los valores a las direcciones de memoria
  *p = 1;     // es lo mismo que *(p+0) = 1
  *(p+1) = 14;
  *(p+2) = 16;

  // imprimimos los valores
  printf("Valor de la 1ra direccion es: %d\n", *p);
  printf("Valor de la 2da direccion es: %d\n", *(p+1));
  printf("Valor de la 3ra direccion es: %d\n", *(p+2));

  printf("\n ----------------------------- \n");

  int *a;

  a = malloc(sizeof(int)*4);
  *a = 3;

  printf("%d\n", *a);

  return 0;
}

